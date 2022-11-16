//Inheritance Class and Constructor with Multiple peremeter

#include<bits/stdc++.h>
using namespace std;
class Rectangle{
public:
    int length,breath,ara,pre;

    Rectangle(int a,int b){
        length=a;
        breath=b;
    }
    void area(){
    cout<<length*breath<<endl;
    }
    void Perimetter(){
    cout<<2*(length+breath)<<endl;
    }
};
class Squre:public Rectangle{
public:

    Squre(int s):Rectangle(s,s){

    }

};

int main(){
    Rectangle obj2(5,6);
    cout<<" Rectangle Area : ";
    obj2.area();
    cout<<" Rectangle Perimetter : ";
    obj2.Perimetter();

    Squre obj(8);
    cout<<" Squre Area : ";
    obj.area();
    cout<<" Squre Perimetter : ";
    obj.Perimetter();
return 0;
}
