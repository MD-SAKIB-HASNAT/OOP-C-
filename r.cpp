
#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int b;
public:
    void setdata(int n)
    {
        b=n;
    }
    void getdata()
    {
        cout<<b<<endl;
    }
};

int main()
{
    int x,y;
    cout<<"How many object you want?";
    cin>>x;
    A arr[x];
    for(int i=1; i<=x; i++)
    {
        cout<<"Enter the Object "<<i<<" : ";
        cin>>y;
        arr[i].setdata(y);
    }
    cout<<endl<<endl;
    for(int i=1; i<=x; i++)
    {
        cout<<"Object "<<i<<" is : ";

        arr[i].getdata();
    }

    return 0;
}

