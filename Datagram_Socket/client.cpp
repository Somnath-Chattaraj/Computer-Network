#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>


#define PORT 8080

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    const char *message = "Hello from UDP client";
    char buffer[1024];

    // Create socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = INADDR_ANY;

    sendto(sockfd, message, strlen(message), 0, (const struct sockaddr *)&servaddr, sizeof(servaddr));
    std::cout << "Message sent to server\n";

    socklen_t len = sizeof(servaddr);
    recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr *)&servaddr, &len);
    std::cout << "Server: " << buffer << std::endl;

    close(sockfd);
    return 0;
}
