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
    A e,f,g,h;
    e.setdata(140);
    e.getdata();
    f.setdata(99);
    f.getdata();
    g.setdata(38);
    g.getdata();
    h.setdata(28);
    h.getdata();

    return 0;
}

