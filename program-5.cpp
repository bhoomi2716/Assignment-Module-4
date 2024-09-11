// Write a program to find the multiplication values and the cubic values using inline function. 

#include<iostream>

using namespace std;

inline int multiply (int no)
{
    int mul ;
    mul= no*no;
    return mul;
}

inline int cubic (int no)
{
    int cube;
    cube= no*no*no;
    return cube;
}

int main()
{
    int number ;
    cout<<"Enter Number For Find Multiplication Value and Cubic Value: ";
    cin>>number;
    
    cout<<" Multiplication Value Of Entered Number : "<<multiply (number)<<endl;
    cout<<" Cubic Value Of Entered Number: "<< cubic(number) <<endl;
    return 0;
}