#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string name, double startingBalance) 
{
    owner = name;

    if (startingBalance >= 0) 
    {
        balance = startingBalance;
    }
    else 
    {
        balance = 0;
    }
}

void BankAccount::setOwner(string name) 
{
    owner = name;
}

string BankAccount::getOwner() const 
{
    return owner;
}

double BankAccount::getBalance() const 
{
    return balance;
}

void BankAccount::deposit(double amount) 
{
    if (amount > 0) 
    {
        balance += amount;
    }
}

void BankAccount::withdraw(double amount) 
{
    if (amount > 0) 
    {
        balance -= amount;
    }
}

void BankAccount::transfer(double amount, BankAccount& accountReceiver)
{
    if (amount > 0)
    {
        accountReceiver.deposit(amount);
        balance -= amount;
    }
}