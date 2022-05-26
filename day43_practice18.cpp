// WRITING TO FILE
/*
#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
        int roll;
        char name[20];
        char address[20];
};

int main(){
    Student S;
    ofstream fout;
    fout.open("C:\\Users\\User\\Desktop\\b.txt");
    cout << "Enter Roll No.: " << endl;
    cin >> S.roll;
    cout << "Enter your Name: " << endl;
    cin >> S.name;
    cout << "Enter your Address: " << endl;
    cin >> S.address;
    fout.write((char *)&S, sizeof(Student));
    fout.close();
    cout << "Written to the file\n";

    cout << "\nFrom the file:\n";
    ifstream fin;
    fin.open("C:\\Users\\User\\Desktop\\b.txt");
    fin.read((char *)&S,sizeof(Student));
    fin.close();
    return 0;
}
*/

#include<iostream>
#include<fstream>
using namespace std;

class Student{
    private:
        char name[20];
        char address[20];
        int roll;
    
    public:
        void get_data(){
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter address: ";
            cin >> address;
        }

        void display_data(){
            cout << roll << "\t\t" << name << "\t" << address << endl;
        }
};

int main(){
    Student S;
    ofstream fout;
    fout.open("C:\\Users\\User\\Desktop\\x.txt");
    for (int i = 1; i <= 3; i++){
        cout<<"Enter rollno, name and address of "<<i<<"th student"<<endl;
        S.get_data();
        fout.write((char *)&S, sizeof(Student));
    }
    cout << "Written to File.\n";
    fout.close();

    ifstream fin;
    fin.open("C:\\Users\\User\\Desktop\\x.txt");
    cout << "\nRoll No.\t Name\t Address\n";
    for (int i = 1; i <= 3; i++){
        fin.read((char *)&S, sizeof(Student));
        S.display_data();
    }
    fin.close();
    cout << "Read from File...\n";
}