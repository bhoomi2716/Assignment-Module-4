/*
- Assume that a bank maintains two kinds of accounts for customer.
- one called as saving account and other as current accounts.
- saving account provides Simple interest and withdraw facilities but no cheque book facility.
- The current account provides cheque book facility but no interest. Current account holders should maintain a minimum balance and if
  the balance falls below this level a service charges is imposed.
- Create a class account that stores customer name, account number and type of account.
- From this derive classes curr_acc and sav_acct to make them more specific to their requirements Include necessary member functions
  in order to achieve the following tasks :
    a. Accepts deposit from a customer and update balance.
    b. Display the balance.
    c. Compute and deposit interest.
    d. Permit withdraws and updates the balance.
    e. Check for the minimum balance, impose penalty, necessary and update the balance.
*/

#include <iostream>

using namespace std;

class account
{
public:
    string customer_name;
    double account_number;
    string account_type;
    int balance;

    account(string Customer_Name, double Account_Number, string Account_Type, int Balance)
    {
        customer_name = Customer_Name;
        account_number = Account_Number;
        account_type = Account_Type;
        balance = Balance;
    }

    void DisplayBasicDetails()
    {
        cout << "Account Holder Name : " << customer_name << endl;
        cout << "Accout Number : " << account_number << endl;
        cout << "Accout Type : " << account_type << endl;
        cout << "Initial Balance : " << balance << endl;
    }
};

class curr_acc : public account
{
public:
    int minimum_balance = 1000;
    int impose_penalty;
    int deposit_amount;

    curr_acc(string Customer_Name, double Account_Number, string Account_Type, int Balance, int credit_amount) : 
    account(Customer_Name, Account_Number, Account_Type, Balance)
    {
        // balance += credit_amount;
        deposit_amount = credit_amount;
    }

    int deposit_balance()
    {
        balance += deposit_amount;
        cout << "Updated Balance: " << balance << endl;
        return balance;
    }

    void DisplayBalance()
    {
        if (balance> minimum_balance)
        {
            cout << "You Must Pay Rs. 5000 Service Charge As Penalty";
        }
        else
        {
            cout << "Your Total Balance Is: " << balance << endl;
        }
    }
};

class sav_acc : public account
{
public:
    float si;
    float rate;
    int year;
    int withdraw_amount;

    sav_acc(string Customer_Name, double Account_Number, string Account_Type, int Balance, int debit_amount) : 
    account(Customer_Name, Account_Number, Account_Type, Balance)
    {
        // balance -= debit_amount;
        withdraw_amount=debit_amount;
        
    }

    int withdraw_balance()
    {
        balance -= withdraw_amount;
        cout << "Updated Balance: " << balance << endl;
        return balance;
    }

    float simple_Interst(float r, int y)
    {
        rate = r;
        year = y;   
        si = (balance * rate * year) / 100;
        cout << "Simple Interest : " << si << endl;
        return si;
    }
};

int main()
{

    string name;
    double acc_no;
    string acc_type;
    int bal;

    cout << "Enter Account Holder Name : ";
    cin >> name;
    cout << "Enter Accout Number : ";
    cin >> acc_no;
    cout << "Enter Accout Type : ";
    cin >> acc_type;
    cout << "Enter Initial Balance : ";
    cin >> bal;

    int ch;
    cout << "Select Service : " << endl;
    cout << "1. Diposit Amount" << endl;
    cout << "2. Withdraw Amount" << endl;
    cout << "3. Display Your Simple Interst" << endl;
    cout << "4. Display Account Details" << endl;
    cin >> ch;

    int credit_amount;
    int debit_amount;
    float r;
    int y;

    

    switch (ch)
    {
    case 1:
        cout << "Enter Amount For Deposit :  " << endl;
        cin >> credit_amount; 
        curr_acc a2(name, acc_no, acc_type, bal, credit_amount);
        a2.deposit_balance();
        break;

    case 2:
        cout << "Enter Amount For Withdraw :  " << endl;
        cin >> debit_amount;
        sav_acc a3(name, acc_no, acc_type, bal, debit_amount);
        a3.withdraw_balance();
        break;

    case 3:
        cout << "Enter Rate : ";
        cin >> r;
        cout << "Enter Number Of Year : ";
        cin >> y;
        a3.simple_Interst(r, y);
        break;

    case 4:
        account a1(name, acc_no, acc_type, bal);
        a1.DisplayBasicDetails();
        break;

    default:
        cout << " Enter Number Between 1 To 4... " << endl;
        break;
    }
    return 0;
}