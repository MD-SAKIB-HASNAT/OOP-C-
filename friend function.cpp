#include<bits/stdc++.h>

using namespace std;

class Account{
private:
    string name,t_ac;
    int ac_num;
    float b_amnt;
public:
    void setValue();
    void deposit();
    void withdraw();
    friend void display(Account A);

};

void Account::setValue()
{
    cout<<"Enter Name of the depositor : ";
    cin>>name;
     cout<<"Enter Account Number : ";
     cin>>ac_num;
     cout<<"Enter Type of Account : ";
     cin>>t_ac;
     cout<<"Enter Balance of the Account : ";
     cin>>b_amnt;
}

void Account::deposit()
{
    cout<<"Enter How much you want to Deposit ? ";
    float a;
    cin>>a;
   b_amnt+=a;
}

void Account::withdraw()
{
    cout<<"Enter How much you want to Withdraw ? ";
    float a;
    cin>>a;
   b_amnt-=a;
}

void display(Account A){
    A.setValue();
    A.deposit();
    cout<<endl;
     cout<<"After Deposit your Amount is : "<<A.b_amnt<<endl;
     cout<<endl;
    A.withdraw();
    cout<<endl;
    cout<<"Name : "<<A.name<<endl;
    cout<<"New Total Amount : "<<A.b_amnt<<endl;
    cout<<endl;
}

int main()
{
    Account acnt[60];
    for(int i=0; i<60; i++)
    {
        display(acnt[i]);
    }


    return 0;
}
