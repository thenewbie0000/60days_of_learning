#include<iostream>
#include<fstream>
#include<string.h>
#define N 2
using namespace std;
class Student{
    public:
    int rollno;
    char name[20];
    char address[20];

    void read_data(){
        cout<<"Enter rollno"<<endl;
        cin>>rollno;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter address"<<endl;
        cin>>address;
    }
    void display()
    {cout<<rollno<<"\t"<<name<<"\t"<<address<<endl;}
};

int main(){
    Student s;
    fstream fin;
    int i,r;
    fin.open("C:\\Users\\User\\Desktop\\a.txt");
    cout<<"Reading student information"<<endl;
    cout<<"Rollno\tName\tAddress"<<endl;
    while(fin.read((char *)&s, sizeof(Student)))
    {s.display();}

    if(fin.eof())
        fin.clear();
    cout<<"\nEnter the rollno of student whose record is to be modified"<<endl;
    cin>>r;
    fin.seekp(sizeof(s)*(r-1));
    cout<<"Enter new record"<<endl;
    s.read_data();
    fin.write((char *)&s,sizeof(Student));
    fin.seekg(0);
    cout<<"The modified record"<<endl;
    while(fin.read((char *)&s, sizeof(Student))){
        if(strcmp(s.address,"KTM")==0)
        s.display();
    }
    return 0;
} 