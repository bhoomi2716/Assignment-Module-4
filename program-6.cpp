// Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>

using namespace std;

class Matrix
{
public:
    int matrix[3];
    int result;

    int inputData()
    {
        cout << "Enter Data For Matrix" << endl;
        for (int i = 1; i <= 3; i++)
        {
            cout << "Enter Element " << i << " : ";
            cin >> matrix[i];
        }

        return matrix[3];
    }

    void DisplayMatrixData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Data Of Matrix" << endl;
        for (int i = 1; i <= 3; i++)
        {
            cout << "Element " << i << " : " << matrix[i] << endl;
        }
    }

    Matrix operator+(const Matrix &M1)
    {
        Matrix M2;
        for (int i = 1; i <= 3; i++)
        {
            M2.matrix[i] = matrix[i] + M1.matrix[i];
        }
        return M2;
    }
};

int main()
{
    Matrix m1, m2, m3;
    m1.inputData();
    m2.inputData();
    m1.DisplayMatrixData();
    m2.DisplayMatrixData();
    m3 = m1 + m2;
    cout << "-------------------------------------------" << endl;
    cout << "Addtion Of Both Matrix : " << endl;
    m3.DisplayMatrixData();
    return 0;
}