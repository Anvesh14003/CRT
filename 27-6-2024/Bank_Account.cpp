#include <iostream>
#include <string>

class BankAccount {
private:
    std::string cust_name;
    std::string cust_mob;
    std::string cust_city;
    int cust_acc_no;
    double balance;

public:
    BankAccount() : balance(0) {}

    void inputData() {
        std::cout << "Enter Customer Name: ";
        std::getline(std::cin, cust_name);
        std::cout << "Enter Customer Mobile: ";
        std::getline(std::cin, cust_mob);
        std::cout << "Enter Customer City: ";
        std::getline(std::cin, cust_city);
        std::cout << "Enter Customer Account Number: ";
        std::cin >> cust_acc_no;
        std::cin.ignore(); 
        std::cout << "Enter Initial Balance: ";
        std::cin >> balance;
        std::cin.ignore(); 
    }

    void display() const {
        std::cout << "Customer Name: " << cust_name << std::endl;
        std::cout << "Customer Mobile: " << cust_mob << std::endl;
        std::cout << "Customer City: " << cust_city << std::endl;
        std::cout << "Customer Account Number: " << cust_acc_no << std::endl;
        std::cout << "Account Balance: $" << balance << std::endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance - amount >= 1000) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else {
            puts("At least 1000 rupees must in the account");
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    do {
        std::cout << "\n--- Bank Account Menu ---\n";
        std::cout << "1. Input Data\n";
        std::cout << "2. Display Data\n";
        std::cout << "3. Deposit Money\n";
        std::cout << "4. Withdraw Money\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); 

        switch (choice) {
        case 1:
            account.inputData();
            break;
        case 2:
            account.display();
            break;
        case 3:
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            std::cin.ignore(); 
            account.deposit(amount);
            break;
        case 4:
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            std::cin.ignore();
            account.withdraw(amount);
            break;
        case 5:
            std::cout << "Exiting program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
