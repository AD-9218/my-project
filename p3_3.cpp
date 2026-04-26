#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    int currentBalance;

    static int totalAccounts;  

public:
    
    BankAccount() {
        
    }

    BankAccount(int accNo, string name, int balance) {
        accountNumber = accNo;
        accountHolderName = name;
        currentBalance = balance;
        totalAccounts++;
    }

    void transferMoney(int amount, BankAccount &receiver) {
        if (amount > 0 && amount <= currentBalance) {
            currentBalance -= amount;
            receiver.currentBalance += amount;
            cout << "Transfer successful!\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    void display() const {
        cout << "\nAccount Holder Name: " << accountHolderName << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Current Balance    : " << currentBalance << endl;
        cout << "-----------------------------\n";
    }

    static void showTotalAccounts() {
        cout << "\nTotal Accounts Created: " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main() {
    int n = 2;
    BankAccount* accounts = new BankAccount[n];

    for (int i = 0; i < n; i++) {
        int number, balance;
        string name;

        cout << "\nEnter details for Account " << i + 1 << endl;
        cout << "Account Number: ";
        cin >> number;

        cout << "Account Holder Name: ";
        cin >> name;

        cout << "Initial Balance: ";
        cin >> balance;

        accounts[i] = BankAccount(number, name, balance);
    }

    
    cout << "\nTransferring 1000 from Account 1 to Account 2...\n";
    accounts[0].transferMoney(1000, accounts[1]);

    
    for (int i = 0; i < n; i++) {
        accounts[i].display();
    }

    BankAccount::showTotalAccounts();

    delete[] accounts;
    return 0;
}