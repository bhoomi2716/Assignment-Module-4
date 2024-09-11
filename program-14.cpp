// Create a example of use delete and new operator.

#include <iostream>

using namespace std;

int main()
{

    string *Name = new string("ABC");

    cout << *Name << endl;

    int *Age = new int(20);

    cout << *Age << endl;

    delete Name, Age;

    return 0;
}