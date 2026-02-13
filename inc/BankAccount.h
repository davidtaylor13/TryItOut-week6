#pragma once

#include<string>
using namespace std;

class BankAccount 
{
private:
    string owner;
    double balance;

public:
    //constructor
    BankAccount(string name, double startingBalance);

    //setter
    void setOwner(string name);

    //getters
    double getBalance() const;
    string getOwner() const;

    //account action
    void deposit(double amount);
    void withdraw(double amount);
    void transfer(double amount, BankAccount& accountReceiver);
};