#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int roll_nu;
    public:

    void setData(string s,int r){
        name = s;
        roll_nu = r;
    }

    void getData(){
        cout<<name<<endl;
        cout<<roll_nu<<endl;
    }

};
   
int main()
{
     student st[5];

     for(int i=0;i<5;i++){
         int r;
         string s;

         cout<<"enter roll number of student "<<i+1<<endl;
         cin>>r;

         cout<<"enter name of student "<<i+1<<endl;
         cin>>s;

         st[i].setData(s,r);
     }

     for(int i=0;i<5;i++){
         st[i].getData();
     }
 
return 0;
}