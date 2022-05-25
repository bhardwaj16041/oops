#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll = 20;

public:
    string name = "ashutosh";
    int* marks = new int[98];

    Student()
    {
        cout << "student name is " << name << endl;
    }

    Student(int m,int n)
    {
        cout<<"student marks is "<<m+n<<endl;
    }

    ~Student()
    {
        delete marks;
        cout<<"delete "<<marks<<endl;
    }
};

int main()
{
    Student s,s1(100,100);

    return 0;
}