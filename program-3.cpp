/*Define a class to represent lecture details. Include the following members and the program
should handle at least details of 5 lecturer.
Data members: Name of the lecturer, Name of the subject, Name of course, Number of lecturers.
Data functions: To assign initial values, to add a lecture detail, to display name and lecture details.*/

#include <iostream>
using namespace std;

class Lecture
{
private:
    string lecname;
    string subname;
    string coursename;
    int lecno;

public:
    void set_detail(string Lec_Name, string Sub_Name, string Course_Name, int Lec_No)
    {
        lecname = Lec_Name;
        subname = Sub_Name;
        coursename = Course_Name;
        lecno = Lec_No;
    }

    void lec_detail()
    { 
            cout << "Enter Lecture Name : ";
            cin >> lecname;
            cout << "Enter Subject Name :";
            cin >> subname;
            cout << "Enter Course Name : ";
            cin >> coursename;
            cout << "Enter Lecture Numner : ";
            cin >> lecno;
        
    }

    void display()
    {
            cout << "Enter Lecture Name : " << lecname << endl;
            cout << "Enter Subject Name :" << subname << endl;
            cout << "Enter Course Name : " << coursename << endl;
            cout << "Enter Lecture Numner : " << lecno << endl;
    }
};

int main()
{

    Lecture lec[5];
    for(int i=1;i<=5;i++) 
    {
        cout<< "Enter lecture Detail :  "<< i << endl;
        lec[i].lec_detail();
        cout<<"================================"<< endl;
    }

    cout<<"-------------- Details Of Entered Lecture --------------"<<endl;


    for(int i=1;i<=5;i++) 
    {
        cout<< "lecture Detail :  "<< i << endl;
        lec[i].display();
    }

    return 0;
}