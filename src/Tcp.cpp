#include "Tcp.h"

TcpServer::TcpServer(const uint16_t port) : port(port) {}

TcpServer::~TcpServer() {}

void TcpServer::startServer() {
	const int primSocket = WSAStartup(MAKEWORD(2, 2), &WSAData); // activatind socket
	if (primSocket != 0) {
		std::cerr << "WSAStartup failed: " << primSocket << std::endl;
	}

	SOCKADDR_IN addr; // port and availability
	int addrl = sizeof(addr);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	addr.sin_port = htons(port);
	addr.sin_family = AF_INET;

}