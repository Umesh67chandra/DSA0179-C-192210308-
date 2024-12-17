#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {}

    ~BankAccount() {
        cout << "Account for " << accountHolder << " closed.\n";
    }

    void deposit(double amount) { if (amount > 0) balance += amount; }
    void withdraw(double amount) { if (amount > 0 && amount <= balance) balance -= amount; }
    void display() { cout << "Holder: " << accountHolder << ", Balance: " << balance << endl; }
};

int main() {
    BankAccount account1("Alice", 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.display();
    return 0;
}

