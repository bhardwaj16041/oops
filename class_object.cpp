#include <bits/stdc++.h>
using namespace std;

class Car
{
    int model=20;

    public:
    
    int no;
    string brand;

    int getModel()
    {
        return model;
    }

};


int main()
{
    Car c; 
    // c.model = 70;
    c.no = 50;
    cout<<c.getModel()<<endl;
    return 0;
}