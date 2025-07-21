#include "ethereum_model.h"
#include <unordered_map>
#include <string>
using Address = std::string;

extern std::unordered_map<Address, unsigned int> balances;
extern Address msg_sender;
extern unsigned int msg_value;

class SimpleBank {
public:
    void deposit() {
        balances[msg_sender] += msg_value;
    }
    void withdraw(unsigned int amount) {
        require(balances[msg_sender] >= amount);
        balances[msg_sender] -= amount;
    }
};