#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount account1("Alice", 500);
	BankAccount account2("Bob", 300);

	account1.deposit(200);
	account1.withdraw(100);

	cout << account1.getOwner() << " balance: $" << account1.getBalance() << endl;
	cout << account2.getOwner() << " balance: $" << account2.getBalance() << endl;

	account1.transfer(100, account2);
	cout << account1.getOwner() << " balance: $" << account1.getBalance() << endl;
	cout << account2.getOwner() << " balance: $" << account2.getBalance() << endl;

	return 0;
}