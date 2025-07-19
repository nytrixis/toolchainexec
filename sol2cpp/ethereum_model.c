#include "ethereum_model.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* Address;

Address msg_sender = "0x0";
unsigned int msg_value = 0;
unsigned int block_timestamp = 0;
unsigned int block_number = 0;
void send(Address to, unsigned int amount) {
    printf("send called: %s %u\n", to, amount);
}

void call(Address to, unsigned int amount) {
    printf("call called: %s %u\n", to, amount);
}

void transfer(Address to, unsigned int amount) {
    printf("transfer called: %s %u\n", to, amount);
}

void selfdestruct(Address to) {
    printf("selfdestruct called: %s\n", to);
}
void require(bool cond) {
    if (!cond) {
        fprintf(stderr, "require failed\n");
        exit(1);
    }
}

void assert(bool cond) {
    if (!cond) {
        fprintf(stderr, "assert failed\n");
        exit(1);
    }
}  