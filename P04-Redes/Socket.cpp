#include <stdexcept>
#include <cstring>
#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/ip.h>
using namespace std;
int main(int argc, char* argv[]) {
	int misocket;

	if (misocket = socket(AF_INET, SOCK_RAW, IPPROTO_RAW); misocket == -1) {
		throw runtime_error(strerror(errno));
	}
	cout << "Se ha creado el socket satisfactoriamente" << endl;
	close(misocket);
	return 0;
}
