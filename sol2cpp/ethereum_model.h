#pragma once
#include <unordered_map>
#include <string>
#include <stdbool.h>
typedef char* Address;
extern Address msg_sender;
extern unsigned int msg_value;
extern unsigned int block_timestamp;
extern unsigned int block_number;

void send(Address to, unsigned int amount);
void call(Address to, unsigned int amount);
void transfer(Address to, unsigned int amount);
void selfdestruct(Address to);
void require(bool cond);
void assert(bool cond);