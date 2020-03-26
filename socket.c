#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "error.h"

#define PORT 6900

void dump(const unsigned char *data_buffer, const unsigned int length)

struct sockaddr_in
{
    __SOCKADDR_COMMON (sin_);
    in_port_t sin_port;           /* Port number. */

    struct in_addr sin_addr;            /* Internet address. */

/* Pad to size of 'struct sockaddr'. */
    unsigned char sin_zero[sizeof (struct sockaddr) -    __SOCKADDR_COMMON_SIZE -    sizeof (in_port_t) -    sizeof (struct in_addr)];
};

int main(void)
{
    int sockfd, new_sockfd; // Listen on sock_fd, new connection on new_fd
    struct sockaddr_in host_addr, client_addr; // My address information
    socklen_t sin_size;

    int recv_length=1, yes=1;
    char buffer[1024];

    if ((sockfd = socket(PF_INET, SOCK_STREAM, 0)) == -1)
        fatal("in socket");

    if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes,sizeof(int)) == -1)
        fatal("setting socket option SO_REUSEADDR");


    host_addr.sin_family = AF_INET; // Host byte order
    host_addr.sin_port = htons(PORT); // Short, network byte order
    host_addr.sin_addr.s_addr = 0; // Automatically fill with my IP.
    memset(&(host_addr.sin_zero), '\0', 8); // Zero the rest of the struct.
    if (bind(sockfd, (struct sockaddr *)&host_addr, sizeof(struct sockaddr)) == -1)
        fatal("binding to socket");

    if (listen(sockfd, 5) == -1)
        fatal("listening on socket");


    while(1)
    { // Accept loop.
        sin_size = sizeof(struct sockaddr_in);
        new_sockfd = accept(sockfd, (struct sockaddr *)&client_addr,&sin_size);
        if(new_sockfd == -1)
            fatal("accepting connection");

        printf("server: got connection from %s port %d\n",
        inet_ntoa(client_addr.sin_addr),
        ntohs(client_addr.sin_port));

        send(new_sockfd, "Hello, server\n", 13, 0);
        recv_length = recv(new_sockfd, &buffer, 1024, 0);
        while(recv_length > 0)
        {
            printf("RECV: %d bytes\n", recv_length);
            dump(buffer, recv_length);
            recv_length = recv(new_sockfd, &buffer, 1024, 0);
        }
        close(new_sockfd);
    }
    return 0;
}

void dump(const unsigned char *data_buffer, const unsigned int length)
{
    unsigned char byte;
    unsigned int i, j;

    for(i=0; i < length; i++)
    {
        byte = data_buffer[i];
        printf("%02x ", data_buffer[i]);   // Display byte in hex.
        if(((i%16)==15) || (i==length-1))
        {
            for(j=0; j < 15-(i%16); j++)
                printf(" ");
            printf("| ");
            for(j=(i-(i%16)); j <= i; j++)
            { // Display printable bytes from line.
                byte = data_buffer[j];
                    if((byte > 31) && (byte < 127)) // Outside printable char range
                        printf("%c", byte);
                    else
                        printf(".");
            }
            printf("\n");   // End of the dump line (each line is 16 bytes)
            }   // End if
    }




