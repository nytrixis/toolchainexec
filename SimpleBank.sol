// SPDX-License-Identifier: UNLICENSED
pragma solidity ^0.8.0;
contract SimpleBank {
    mapping(address => uint) balances;
    function deposit() public payable {
        balances[msg.sender] += msg.value;
    }
    function withdraw(uint amount) public {
        require(balances[msg.sender] >= amount);
        payable(msg.sender).transfer(amount); // Use transfer for safe Ether transfer
        balances[msg.sender] -= amount;
    }
}