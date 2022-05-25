#include<bits/stdc++.h>
using namespace std;
class college{
    private:
    int rollno=20;
    string section;

    public:
    
    void setdata(string s,int r){
        section=s;
        rollno=r;

    }
    void getdata(){
        cout<<section<<endl;
        cout<<rollno<<endl;
    }
    void display(){
        cout<<"this is display"<<endl;
        cout<<rollno<<endl;
    }
    void info(college &b){
        
    }


};
class student{
    private:
    string name;
    string address;
    public:
    friend void college ::info(college &b);
    friend void fun(student &s);

    void setdata(string n,string a){
        name=n;
        address=a;
    }
    void getdata(){
        cout<<name<<endl;
        cout<<address<<endl;
    }
   

};

void college ::info(college &c)
{
    
}


void fun(student &s)
{
    s.getdata();
}
   
int main()
{
    college c; 
    student s;
    fun(s);


    

     
 
return 0;
}