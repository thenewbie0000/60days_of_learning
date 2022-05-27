#include<iostream>
#include<fstream>
using namespace std;
class student{
    int roll;
    char name[20];
    char address[20];
    public:
    void display(){
        cout<<"Rollno:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
    }
};

int main(){
    student s;
    int i;
    ifstream fin;
    fin.open("C:\\Users\\User\\Desktop\\a.txt");
    fin.seekg(sizeof(s)*2,ios::cur);
    fin.read((char*)&s,sizeof(student));
    s.display();
    fin.close();
    return 0;
} 