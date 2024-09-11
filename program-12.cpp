// Write a program to read and write data in to file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream MyFile("file.txt");

    MyFile << "Welcome In C++ ";

    string MyText;
    fstream MyReadFile("file.txt");

    while (getline(MyReadFile, MyText))
    {
        cout << MyText;
    }

    MyReadFile.close();
    MyFile.close();
}