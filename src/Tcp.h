#pragma once

#include <iostream>
#include <thread>

#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

class TcpServer {
public:
	TcpServer(const uint16_t port);
	~TcpServer();

	void startServer();
	void closeServer();
	void setHanlker();

	uint16_t port;

	SOCKET serverSocket;
	WSADATA WSAData;
};