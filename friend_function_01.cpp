#include<bits/stdc++.h>
using namespace std;

class sum
{
    int a;
    int b;

    public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }

    friend void calculate(sum &s);

};

void calculate(sum &s)
{
    cout<<"sum of a and b is "<<s.a+s.b<<endl;
}
   
int main()
{
     sum s;
     s.setData(10,15);
     calculate(s);
 
return 0;
}