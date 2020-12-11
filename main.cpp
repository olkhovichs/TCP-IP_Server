#include "Tcp.h"
#include "Client.h"

int main() {
	TcpServer server(3487);
	server.startServer();
	return 0;
}
