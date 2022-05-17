#include<iostream>
#include<conio.h>
const int len=20;
using namespace std;

class student{
    private:
        char school[len];
        char degree[len];
    public:
    void getdata(){
        cout<<"Enter name of the school or university:";
        cin>>school;
        cout<<"Enter highest degree earned:";
        cin>>degree;
    }
    void putdata(){
        cout<<endl<<"School or university:"<<school;
        cout<<endl<<"Highest degree earned:"<<degree<<endl;
    }
};
class employee{
    private:
        char name[len];
        unsigned long number;
    public:
    void getdata(){
        cout<<"Enter name of employee:";
        cin>>name;
        cout<<"Enter number:";
        cin>>number;
    }
    void putdata(){
        cout<<endl<<"Name:"<<name;
        cout<<endl<<"Number:"<<number<<endl;
    }
};
class manager{
    private:
        char title[len];
        double dues;
        employee emp;
        student stu;

    public:
    void getdata(){
        stu.getdata();
        cout<<"Enter title:";cin>>title;
        cout<<"Enter golf club dues:";cin>>dues;
        emp.getdata();
    }
    void putdata(){
        stu.putdata();
        cout<<"Title:"<<title << endl;
        cout<<"Gulf club dues:"<<dues;
        emp.putdata();
    }
};
int main(){
    manager m;
    m.getdata();
    m.putdata();
    getch();
    return 0;
}