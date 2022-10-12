

// Call by Value //

#include<bits/stdc++.h>

using namespace std;

class Number{
private:
    int x,y,z;
public:
    void getInfo();
    Number SignChange(Number a1);
    void display();
};

void Number::getInfo()
{
    cout<<"Enter X,Y,Z : ";
    cin>>x>>y>>z;
}
Number Number::SignChange(Number a1)
{
    a1.x = -a1.x;
    a1.y = -a1.y;
    a1.z = -a1.z;
    return a1;
}
void Number::display()
{
    cout<<x<<" "<<y<<" "<<z;
}
int main()
{
    Number n1,n2;
    n1.getInfo();
    cout<<"After Change :"<<endl;
    n1.display();
    cout<<endl<<"Before Change :"<<endl;
    n2=n1.SignChange(n1);
    n2.display();

    return 0;
}
