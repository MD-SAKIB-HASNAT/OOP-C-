
//Direct Print //

#include<bits/stdc++.h>

using namespace std;

class Number{
private:
    int x,y,z;
public:
    void getInfo();
    void SignChange(Number a1);
    void display();
};

void Number::getInfo()
{
    cout<<"Enter X,Y,Z : ";
    cin>>x>>y>>z;
}
void Number::SignChange(Number a1)
{
    a1.x = -a1.x;
    a1.y = -a1.y;
    a1.z = -a1.z;
    cout<<a1.x<<" "<<a1.y<<" "<<a1.z;
}
void Number::display()
{
    cout<<x<<" "<<y<<" "<<z;
}
int main()
{
    Number n1;
    n1.getInfo();
    cout<<"After Change :"<<endl;
    n1.display();
    cout<<endl<<"Before Change :"<<endl;
    n1.SignChange(n1);

    return 0;
}
