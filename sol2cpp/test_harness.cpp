#include "SimpleBank.cpp"
#include "ethereum_model.h"
#include <klee/klee.h>
#include <iostream>

int main() {
    // Symbolic input for msg_sender and msg_value
    char sender[42];
    klee_make_symbolic(sender, sizeof(sender), "msg_sender");
    sender[41] = '\0'; // Null-terminate for safety
    msg_sender = sender;

    unsigned int value;
    klee_make_symbolic(&value, sizeof(value), "msg_value");
    msg_value = value;

    balances[msg_sender] = 0;

    SimpleBank bank;

    // Symbolic withdrawal amount
    unsigned int withdraw_amt;
    klee_make_symbolic(&withdraw_amt, sizeof(withdraw_amt), "withdraw_amt");

    bank.deposit();
    bank.withdraw(withdraw_amt);

    return 0;
}