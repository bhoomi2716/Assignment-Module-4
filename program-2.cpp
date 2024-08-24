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
        string acc_no;
        string acc_type;
        double balance;

    public:
        Bank_Account(string Name, string Acc_No, string Acc_Type, double Balance)
        {
            name = Name;
            acc_no = Acc_No;
            acc_type = Acc_Type;
            balance = Balance;
        }

        void deposit(double Amount)
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

        void withdraw(double Amount)
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
    Bank_Account account("Bhoomi","3412BVCRT121","Savings",13000);
    account.display();
    account.withdraw(200);
    account.deposit(500);
    account.withdraw(15000);
    return 0;
}