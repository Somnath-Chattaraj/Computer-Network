#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/ip.h> // For IP header
#include <arpa/inet.h>
#include <unistd.h>

#define DEST_IP "127.0.0.1"
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    char buffer[BUFFER_SIZE];
    struct sockaddr_in dest_addr;

    // Create raw socket
    if ((sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP)) < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&dest_addr, 0, sizeof(dest_addr));
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

    // Example of sending a raw packet
    strcpy(buffer, "Raw packet data");
    if (sendto(sockfd, buffer, strlen(buffer), 0, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) < 0) {
        perror("Send failed");
    } else {
        std::cout << "Raw packet sent\n";
    }

    close(sockfd);
    return 0;
}
