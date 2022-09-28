
#include<bits/stdc++.h>
using namespace std;
class Circle{
private:
    float r;
public:
    void setdata(float x)
    {
       r=x;
    }
    void area()
    {
       cout<<"Area : "<<3.1416*r*r<<endl;
    }
    void Perimeter()
    {
       cout<<"Perimeter: "<<2*3.1416*r<<endl;
    }
};
int main()
{
    Circle c1;
    float a;
    cout<<"Enter Radius: ";
    cin>>a;
    c1.setdata(a);
    c1.area();
    c1.Perimeter();
    return 0;
}

