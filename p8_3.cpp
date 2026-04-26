#include <iostream>
using namespace std;

string logArr[100];
int logIndex = 0;

void addLog(string msg)
{
    logArr[logIndex++] = msg;
}

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        addLog("Enter deposit()");

        if (amount <= 0)
        {
            addLog("Error: Invalid deposit amount");
            throw "Invalid deposit!";
        }

        balance += amount;
        addLog("Deposit successful");

        addLog("Exit deposit()");
    }

    void withdraw(double amount)
    {
        addLog("Enter withdraw()");

        if (amount > balance)
        {
            addLog("Error: Insufficient balance");
            throw "Insufficient balance!";
        }

        balance -= amount;
        addLog("Withdraw successful");

        addLog("Exit withdraw()");
    }

    double getBalance()
    {
        return balance;
    }
};

void transaction(BankAccount &acc)
{
    addLog("Enter transaction()");
    acc.withdraw(5000);
    addLog("Exit transaction()");
}

void process(BankAccount &acc)
{
    addLog("Enter process()");
    transaction(acc);
    addLog("Exit process()");
}

int main()
{
    BankAccount acc(2000);

    addLog("Enter main()");

    try
    {
        process(acc);
    }
    catch (const char *msg)
    {
        addLog("Exception caught in main()");
        cout << "Exception: " << msg << endl;
    }

    addLog("Exit main()");

    cout << "\n--- Transaction Logs ---\n";
    for (int i = 0; i < logIndex; i++)
    {
        cout << logArr[i] << endl;
    }

    return 0;
}