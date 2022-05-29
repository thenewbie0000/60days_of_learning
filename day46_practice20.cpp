#include<conio.h>
#include<iostream>
#include<fstream>
#define N 2
using namespace std;
class Student{
    private:
    int rollno;
    char name[20];
    char address[20];
    public:
    void read_data(){
        cout<<"Enter rollno"<<endl;
        cin>>rollno;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter address"<<endl;
        cin>>address;
    }
};

int main(){
    Student s;
    ofstream fout;
    int i;
    fout.open("C:\\Users\\User\\Desktop\\abc.txt",ios::app);
    cout<<"Enter details of "<<N<<" students"<<endl;
    for(i=1;i<=N;i++){
        s.read_data();
        fout.write((char *)&s,sizeof(Student));
    }
    int end = fout.tellp();
    int ob = end/sizeof(s);
    cout<<"Number of objects = "<<ob;
    fout.close();
    getch();
    return 0;
} 