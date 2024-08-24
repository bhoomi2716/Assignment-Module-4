/*Create a class person having members name and age. 
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include<iostream>

using namespace std;

class person
{
    protected:
        string name;
        int age;

    public :
        int displayPersonDetails(string n,int a)
        {
            name = n;
            age = a;

            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;

            return name, age;
        }
};

class student : public person
{
    protected:
        float percentage;

    public:
        float displayStudentDetails(float p)
        {
            percentage = p;
            
            cout<<"Percentage : "<<percentage << " % "<<endl;    
            return percentage;
        }

};

class teacher : public person
{
    protected:
        int salary;

    public:
        int displayTeacherDetails(int s)
        {
            salary = s;
            
            cout<<"Salary : "<<salary<<endl;   
            return salary; 
        }

};

class DisplayDetails :  public teacher ,public student{
    public:
        float DisplayAllDetails(string n, int a, float p, int s)
        {
            student::displayPersonDetails(n, a);
            displayStudentDetails(p);
            displayTeacherDetails(s);
            return n,a,p,s;
        }
        
};



int main()
{
    string n;
    int a,s;
    float p;

    cout<<"Enter Name : ";
    cin>>n;
    cout<<"Enter Age : ";
    cin>>a;
    cout<<"Enter Percentage : ";
    cin>>p;
    cout<<"Enter Salary : ";
    cin>>s;
    DisplayDetails per;
    // p.DisplayAllDetails("abc",23,90,12000);
    per.DisplayAllDetails(n,a,p,s);
    return 0;
}

//Done