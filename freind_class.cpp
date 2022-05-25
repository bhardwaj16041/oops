#include<bits/stdc++.h>
using namespace std;
class college{
    private:
    int rollno=20;
    string section;

    public:
    friend class student;
    void setdata(string s,int r){
        section=s;
        rollno=r;

    }
    void getdata(){
        cout<<section<<endl;
        cout<<rollno<<endl;
    }
    void display(){
        cout<<rollno<<endl;
    }


};
class student{
    private:
    string name;
    string address;
    public:
    void setdata(string n,string a){
        name=n;
        address=a;
    }
    void getdata(){
        cout<<name<<endl;
        cout<<address<<endl;
    }

    void show(college &c)
    {

        c.rollno = 50;
    }

};
   
int main()
{
    college c; 
    student s;

    s.show(c);
    c.display();
     
 
return 0;
}