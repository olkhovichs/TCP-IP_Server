#pragma once

#include <iostream>
#include <iomanip>

#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

class Client {
public:
	Client(SOCKET socket, SOCKADDR_IN socketAddr);
	~Client();
	void handle();

	SOCKET clientSocket;
	SOCKADDR_IN clientAddr;
	char buffer[1024];
};