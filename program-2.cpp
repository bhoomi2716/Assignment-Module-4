/* Define a class to represent a bank account.
Include the following members: Data Member: - Name of the depositor - Account Number - Type of Account - Balance amount in the account.
Member Functions - To assign values - To deposited an amount - To withdraw an amount after checking balance - To display name and balance. */

#include <iostream>
#include <string>

using namespace std;

class Bank_Account
{
private:
    string name;
    int balance;
    string acc_type;
    double acc_no;

public:
    Bank_Account(string Name, double Acc_No, string Acc_Type, int Balance)
    {
        name = Name;
        acc_no = Acc_No;
        acc_type = Acc_Type;
        balance = Balance;
    }

    void deposit(int Amount)
    {
        if (Amount >= 0)
        {
            balance += Amount;
            cout << "Rs. " << Amount << "Was Credited" << endl;
            cout << "Your Total Balance:" << balance << endl;
        }
        else
        {
            cout << "Invalid Deposit Amount" << endl;
        }
    }

    void withdraw(int Amount)
    {
        if (Amount >= 0 && Amount <= balance)
        {
            balance -= Amount;
            cout << "Rs. " << Amount << "Was Debited" << endl;
            cout << "Your Total Balance:" << balance << endl;
        }
        else if (Amount > balance)
        {
            cout << "Enter Amount within Balance Limit ";
        }
        else
        {
            cout << "Invalid Deposit Amount" << endl;
        }
    }

    void display()
    {
        cout << "Depositor Name: " << name << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    string acc_name, acc_type;
    int balance;
    double acc_no;

    cout << "Enter Account Holder Name: ";
    cin >> acc_name;
    cout << "Enter Account Number: ";
    cin >> acc_no;
    cout << "Enter Account Type: ";
    cin >> acc_type;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    Bank_Account account(acc_name, acc_no, acc_type, balance);

    int ch;
    int Choise = 0;
    int damount, wamount;
    while (Choise!=1)
    {
        cout << "Which Operation Do You Want? " << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Amount Which you want to deposit ";
            cin >> damount;
            account.deposit(damount);
            account.display();
            break;

        case 2:
            cout << "Enter Amount Which you want to Withdraw ";
            cin >> wamount;
            account.withdraw(wamount);
            account.display();
            break;

        default:
            cout << "Enter Choice 1 Or 2";
            break;
        }

        cout << " Do you want to Perform More Operations ? " << endl;
        cout << "If you want to perform more operations, press 0 :  " << endl;
        cout << "If you Don't want to perform more operations, press 1: " << endl;
        cin >> Choise;
    }
    return 0;
}