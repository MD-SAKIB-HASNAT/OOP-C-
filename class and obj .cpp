#include<bits/stdc++.h>
using namespace std;

class rectangle{
private:
    int length,width,area;
public:
    void AREA(int l,int w)
    {
        length=l;
        width=w;
        area=length*width;
    }
    void display()
    {
        cout<<"Length: "<<length<<"\n"<<"Width: "<<width<<"\n"<<"AREA: "<<area<<endl;
    }

};

int main()
{
    int x,y;
    cin>>x>>y;
    rectangle r1,r2,r3;
    r1.AREA(x,y);
    r1.display();
    int a,b;
    cin>>a>>b;
    r2.AREA(a,b);
    r2.display();

    return 0;
}
