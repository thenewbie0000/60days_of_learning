#include<iostream>
#include<fstream>
using namespace std;

int main(){
    /*
    ifstream fin;
    char a[20];
    fin.open("C:\\Users\\User\\Desktop\\a.txt");
    fin.getline(a, 20);
    cout << "From the file:\n"<< a << endl;
    fin.getline(a,20);
    cout << a << endl;
    return 0;
    */
    ifstream fin;
    char ch;
    fin.open("C:\\Users\\User\\Desktop\\a.txt");
    while(!fin.eof()){      // or we can simply use while(fin)
        fin.get(ch);
        cout<<ch;
    }
    return 0;
}