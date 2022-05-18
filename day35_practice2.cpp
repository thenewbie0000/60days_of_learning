#include<iostream>
using namespace std;
class base{
    public:
    void display (){
        cout<<"\n display base:";
    }
    virtual void show (){
        cout <<"\n show base";
    }
};
class derived: public base{
    public:
    void display (){
        cout<<"\n display derived:";
    }
    void show (){
        cout<<"\n show derived";
    }
};

int main(){
    base B;
    derived D;
    base *bptr;
    cout<<"\n bptr point to base";
    bptr = &B;
    bptr -> display(); //calls base version
    bptr ->show(); //calls base version
    cout<<"\n bptr points to derived";
    bptr = &D;
    bptr -> display(); // calls base version
    bptr -> show(); //calls derived version
}