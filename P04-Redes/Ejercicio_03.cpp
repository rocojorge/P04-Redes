#include <iostream>
#include "netinet/in.h"

using namespace std;

int main(){
    short num16=65;
    long num32=429;

    cout << ntohs(num16) << "\n" << ntohs(num32) << "\n" << ntohl(num16) << "\n" << ntohl(num32) << "\n\n";
    cout << htons(num16) << "\n" << htons(num32) << "\n" << htonl(num16) << "\n" << htonl(num32) << "\n";

    return 0;
}