std::unordered_map<Address, uint> balances;
balances[msg_sender] += msg_value;
    void deposit() {
    }
require(balances[msg_sender] >= amount);
transfer(msg_sender, amount);
balances[msg_sender] -= amount;
    void withdraw(uint amount) {
    }
#include "ethereum_model.h"
class SimpleBank {
public:
// State variables
};
