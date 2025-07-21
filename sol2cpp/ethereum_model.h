#pragma once
#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>

typedef std::string Address; 
extern Address msg_sender;
extern unsigned int msg_value;
extern unsigned int block_timestamp;
extern unsigned int block_number;

// Simulated global state
extern std::unordered_map<Address, unsigned int> balances;

// Ether transfer functions
void send(Address to, unsigned int amount);
void call(Address to, unsigned int amount);
void transfer(Address to, unsigned int amount);
void selfdestruct(Address to);

// Require/assert
void require(bool cond);
void contract_assert(bool cond);

// Event logging 
void emit_event(const std::string& event_name, const std::vector<std::string>& args);

// Macro for payable
#define payable(addr) (addr)