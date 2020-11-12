#include <iostream>
#include <string>
#include <sstream>

#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
	WSADATA wsaData;

	int startResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (startResult != 0) { // separate method
		std::cerr << "WSAStartup failed" << startResult << std::endl;
		return startResult;
	}
}