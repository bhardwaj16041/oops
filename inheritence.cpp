#include<bits/stdc++.h>
using namespace std;

class Car
{
    int cost = 100000;

    protected:
    int fuel_capacity = 20;

    public:
    int plate_no=100;
    string brand = "audi";

    void printmodel()
    {
        cout<<"car brand is "<<brand<<endl;
        cout<<"car plate no is "<<plate_no<<endl;
    }

};

class Car1 : public Car
{
    public:
    
    int getFuel()
    {
        return fuel_capacity;
    }

};
   
int main()
{
     Car1 c;
     cout<<c.getFuel()<<endl; 
    
 
return 0;
}