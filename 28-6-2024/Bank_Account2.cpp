#include <iostream>
#include <string>

class BankAccount {
protected:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    virtual ~BankAccount() {}

    void inputData() {
        std::cout << "Enter account number: ";
        std::cin >> accountNumber;
        std::cout << "Enter account holder name: ";
        std::cin.ignore();
        std::getline(std::cin, accountHolderName);
        std::cout << "Enter initial balance: ";
        std::cin >> balance;
    }

    void display() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && balance - amount >= 1000) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "At least 1000 rupees must be in the account.\n";
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }
};

class SavingsAccount : public BankAccount {
public:
    void deposit(double amount) override {
        BankAccount::deposit(amount);
    }

    void withdraw(double amount) override {
        BankAccount::withdraw(amount);
    }
};

class CurrentAccount : public BankAccount {
public:
    void deposit(double amount) override {
        BankAccount::deposit(amount);
    }

    void withdraw(double amount) override {
        BankAccount::withdraw(amount);
    }
};

void displayMenu() {
    std::cout << "1. Deposit" << std::endl;
    std::cout << "2. Withdraw" << std::endl;
    std::cout << "3. Display" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

int main() {
    int accountType;
    std::cout << "Choose Account Type:" << std::endl;
    std::cout << "1. Savings Account" << std::endl;
    std::cout << "2. Current Account" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> accountType;

    BankAccount* account;

    if (accountType == 1) {
        account = new SavingsAccount();
    } else if (accountType == 2) {
        account = new CurrentAccount();
    } else {
        std::cout << "Invalid choice" << std::endl;
        return 1;
    }

    account->inputData();

    int choice;
    double amount;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                account->deposit(amount);
                break;
            case 2:
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                account->withdraw(amount);
                break;
            case 3:
                account->display();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 4);

    delete account;
    return 0;
}
