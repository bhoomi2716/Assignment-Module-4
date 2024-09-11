// Write a program of to concatenate the two strings using Operator Overloading.

#include <iostream>

using namespace std;

class concate
{
public:
    string str;
    int result;

    int inputData()
    {
        cout << "Enter a string : " << endl;
        cin >> str;
    }

    void DisplayMatrixData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Entered String : " << str << endl;
    }

    concate operator+(const concate &C1)
    {
        concate C2;
            C2.str = str + C1.str;
        return C2;
    }
};

int main()
{
    concate c1, c2, c3;
    c1.inputData();
    c2.inputData();
    c1.DisplayMatrixData();
    c2.DisplayMatrixData();
    c3 = c1 + c2;
    cout << "-------------------------------------------" << endl;
    cout << "concatenate String : " << endl;
    c3.DisplayMatrixData();
    return 0;
}