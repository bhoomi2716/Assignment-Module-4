/* Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance) */

#include <iostream>
using namespace std;

class Cricketer
{
public:
    int total_runs = 0;
    int average_runs = 0;
    int Best_Performance = 0;
    int runs[5];
};

class Batsman : public Cricketer
{

public:
    void Input()
    {
        cout << "Enter Run : " << endl;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Match " << i << " : ";
            cin >> runs[i];
        }

        for (int i = 1; i <= 5; i++)
        {
            total_runs += runs[i];
        }

        average_runs = total_runs / 5;

        Best_Performance = runs[0];

        for (int i = 1; i <= 5; i++)
        {
            if (runs[i] > Best_Performance)
            {
                Best_Performance = runs[i];
            }
        }
    }

    void Display()
    {
        cout << "--------------------------------" << endl;
        cout << "Tottal Runs: " << total_runs << endl;
        cout << "Average Runes : " << average_runs << endl;
        cout << "Best Performance : " << Best_Performance << endl;
    }
};

int main()
{
    Batsman player;
    player.Input();
    player.Display();
    return 0;
}

//Done 