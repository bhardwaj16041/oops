#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    static int count;

    void setData()
    {
        cout<<"enter roll number of student "<<count++<<endl;
        cin>>roll;
    }


};

int Student :: count=1;
   
int main()
{
     
     Student s[3],s1[3];

     for(int i=0;i<3;i++)
     {
         s[i].setData();
     }

     for (int i = 0; i < 3; i++)
     {
         s1[i].setData();
     }
     


 
return 0;
}