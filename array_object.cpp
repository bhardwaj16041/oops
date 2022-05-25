#include<bits/stdc++.h>
using namespace std;
class jersy{
    private:
    string color;
    int number;
    public:
    void setdata(string c,int n){
        color=c;
        number=n;
    }
    void getdata(){
        cout<<color<<endl;
        cout<<number<<endl;
    }


};
   
int main()
{
    jersy j;
    for(int i=0;i<3;i++){
        int n;
        string c;
        cout<<"enter jersy number "<<i+1<<endl;
        cin>>n;
        cout<<"enter jersy color "<<endl;
        cin>>c;
    }
     
 
return 0;
}