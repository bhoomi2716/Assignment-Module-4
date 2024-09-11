// Write a program of to swap the two values using templates.

#include <iostream>

using namespace std;

template <typename Swap>

void swapValues(Swap &a, Swap &b)
{
    Swap null = a;
    a = b;
    b = null;
}

int main()
{
    int no1, no2;

    cout << "Enter First Number : ";
    cin >> no1;

    cout << "Enter Second Number : ";
    cin >> no2;

    cout << "=============================================" << endl;

    cout << "------ Before swapping ------ " << endl;
    cout << "First Number : " << no1 << ", Second Number : " << no2 << endl;

    swapValues(no1, no2);

    cout << "------ After swapping ------ " << endl;
    cout << "First Number : " << no1 << ", Second Number : " << no2 << endl;

    return 0;
}