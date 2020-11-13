#include "Tcp.h"

TcpServer::TcpServer(const uint16_t port) : port(port) {}

TcpServer::~TcpServer() {}

void TcpServer::startServer() {
	int primSocket = WSAStartup(MAKEWORD(2, 2), &WSAData); // activatind socket
	if (primSocket != 0) {
		std::cerr << "WSAStartup failed: " << primSocket << std::endl;
	}

	SOCKADDR_IN addr; // port and availability
	int lenAddr = sizeof(addr);
	addr.sin_addr.S_un.S_addr = INADDR_ANY; // any computer
	addr.sin_port = htons(port); // appoint port
	addr.sin_family = AF_INET; // using global network

	// init socket
	serverSocket = socket(AF_INET, SOCK_STREAM, 0); 
	if (serverSocket == SOCKET_ERROR) {
		std::cerr << "Error at socket:" << WSAGetLastError() << std::endl;
	}

	// blinding socket
	primSocket = bind(serverSocket, (struct sockaddr*)&addr, lenAddr);
	if (primSocket == SOCKET_ERROR) { // checking for binding
		std::cout << "Bind failed: "<< WSAGetLastError() << std::endl;
	}


}