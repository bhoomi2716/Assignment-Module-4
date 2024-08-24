/*Write a program of find the simple interest using constructor with dynamic initialization.
Make constructor like Interest (int principal, int year, int rate) Interest (int principal, int year,float rate = 2.5)*/

#include <iostream>

using namespace std;

class Interest
{
    private:
        int p, y;
        float r;

    public:
        Interest(int principal, float rate, int year)
        {
            p = principal;
            r = rate;
            y = year;
        }

        void display()
        {
            float si;
            si = (p * r * y) / 100;

            cout << "Simple Interst Is : " << si << endl;
        }
};

int main()
{
    int principal, year;
    float rate;
    
    cout << "Enter principal: " << endl;
    cin >> principal;
    cout << "Enter Rate: " << endl;
    cin >> rate;
    cout << "Enter Number Of Year : " << endl;
    cin >> year;

    Interest Interest(principal, rate, year);

    Interest.display();

    return 0;
}