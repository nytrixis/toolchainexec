#include "ethereum_model.h"
#include <cassert>

// Global variables (define here)
Address msg_sender = "";
unsigned int msg_value = 0;
unsigned int block_timestamp = 0;
unsigned int block_number = 0;
std::unordered_map<Address, unsigned int> balances;

void send(Address to, unsigned int amount) {
    std::cout << "[send] Sending " << amount << " to " << to << std::endl;
    balances[to] += amount;
}

void call(Address to, unsigned int amount) {
    std::cout << "[call] Calling " << to << " with " << amount << std::endl;
    balances[to] += amount;
}

void transfer(Address to, unsigned int amount) {
    std::cout << "[transfer] Transferring " << amount << " to " << to << std::endl;
    balances[to] += amount;
}

void selfdestruct(Address to) {
    std::cout << "[selfdestruct] Contract destroyed, funds sent to " << to << std::endl;
    // Simulate contract destruction (could clear state, etc.)
}

void require(bool cond) {
    if (!cond) {
        std::cerr << "[require] Condition failed!" << std::endl;
        assert(false);
    }
}

void contract_assert(bool cond) {
    if (!cond) {
        std::cerr << "[assert] Assertion failed!" << std::endl;
        assert(false);
    }
}

void emit_event(const std::string& event_name, const std::vector<std::string>& args) {
    std::cout << "[event] " << event_name << ": ";
    for (const auto& arg : args) std::cout << arg << " ";
    std::cout << std::endl;
}
