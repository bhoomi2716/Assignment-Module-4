// Write a program of to sort the array using templates.

#include <iostream>

using namespace std;

template <typename Sort>

void Sorting(Sort array[])
{
    Sort null;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (array[j] > array[i])
            {
                null = array[i];
                array[i] = array[j];
                array[j] = null;
            }
        }
    }

    cout << "------ Sorted Array ------" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Element" << i << " : ";
        cin >> arr[i];
    }

    Sorting(arr);

    return 0;
}