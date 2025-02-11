#include <iostream>
#include <string>

using namespace std;

// BankAccount class
class BankAccount
{
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) : accountHolder(name), balance(initialBalance) {}

    // Function Overloading: Deposit money
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " to account of " << accountHolder << ". New balance: $" << balance << endl;
    }

    void deposit(int cash, double cheque)
    {
        balance += cash + cheque;
        cout << "Deposited $" << cash << " in cash and $" << cheque << " by cheque to account of "
             << accountHolder << ". New balance: $" << balance << endl;
    }

    // Operator Overloading: Add balances of two accounts
    BankAccount operator+(const BankAccount& other)
    {
        return BankAccount(accountHolder + " & " + other.accountHolder, balance + other.balance);
    }

    // Display account details
    void display() const
    {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }
};

void runOverloadingExamples()
{
    // Create two bank accounts
    BankAccount firstAccount("Ali", 200.0);
    BankAccount secondAccount("Ehsan", 350.0);

    // Function overloading: Deposit money
    firstAccount.deposit(300.0); // Deposit a single amount
    secondAccount.deposit(100, 50.0); // Deposit cash and cheque
    
    // Function Overloading and Ambiguity
    // When the compiler is unable to decide which function is to be invoked among the overloaded function, this situation is known as function overloading ambiguity.
    // Causes of Ambiguity:
    // 1. Type Conversion
    // 2. Function with default arguments
    // 3. Function with pass-by-reference

    // --------------------
    // Operator overloading: Combine balances of two accounts
    BankAccount mergedAccount = firstAccount + secondAccount;
    cout << "After merging accounts:\n";
    mergedAccount.display();

    // --------------------
}
