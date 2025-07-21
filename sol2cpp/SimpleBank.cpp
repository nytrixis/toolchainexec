#include "ethereum_model.h"
class SimpleBank {
public:
    std::unordered_map<Address, uint> balances;
    void deposit() {
        balances[msg_sender] += msg_value;
    }
    void withdraw(uint amount) {
        require(balances[msg_sender] >= amount);
        transfer(msg_sender, amount);
        balances[msg_sender] -= amount;
    }
};
