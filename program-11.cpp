// Write a program to swap the two numbers using friend function.

#include <iostream>

using namespace std;

class Swap
{
public:
    int number1, number2;

    Swap(int no1, int no2)
    {
        number1 = no1;
        number2 = no2;
    }

    void BeforDisplayValue()
    {
        cout << "....... Befor Swaping ......." << endl;
        cout << "First Number: " << number1 << endl;
        cout << "Second Number: " << number2 << endl;
    }

    friend void SwapValues(Swap);
};

void SwapValues(Swap S)
{
    int temp = 0;
    temp = S.number1;
    S.number1 = S.number2;
    S.number2 = temp;

    cout << "....... After Swaping ......." << endl;
    cout << "First Number: " << S.number1 << endl;
    cout << "Second Number: " << S.number2 << endl;
}

int main()
{
    int no1, no2;
    cout << "Enter First Number : ";
    cin >> no1;
    cout << "Enter Second Number : ";
    cin >> no2;

    Swap value(no1, no2);

    value.BeforDisplayValue();
    SwapValues(value);

    return 0;
}

//Done 