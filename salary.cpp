
#include<bits/stdc++.h>

using namespace std;

class Employe{
private:
    int id,slph,nhr;
public:
    void getInfo();
    int calculate(Employe A1);
};

void Employe::getInfo()
{
    cout<<"id, Salary per Hour, Num of Working Hour : ";
    cin>>id>>slph>>nhr;
}
int  Employe::calculate(Employe A1)
{
    int total;
    total=A1.slph*A1.nhr;
   return total;
}

int main()
{
   Employe E1;
   int rslt;
   E1.getInfo();
   rslt=E1.calculate(E1);
   cout<<"Total  : "<<rslt;

    return 0;
}


