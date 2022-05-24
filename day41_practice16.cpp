#include<iostream>
using namespace std;
/*
int main(){
    int a, b, x;
    cout << "Enter two numbers for subtraction adn then division:\n";
    cin >> a >> b;
    x = a-b;
    try
    {
        if(x != 0){
            cout << "Result(a/x) = " << (float)a/x;
        }
        else
            throw(x);
    }
    catch(int i)
    {
        cout << "Exception caught!\n";
        cout << "x = 0\n";
    }
    
}
*/
/*
void divide(int a, int b, int c){
       if ((b - c) != 0){
           float r = (float)a/(b-c);
           cout << a << "/(" << b << "-" << c << ") = " << r << endl;
       }   
       else
       throw(b-c); 
}

int main(){
    try{
        divide(10, 20, 30);
        divide(5, 10, 13);
        divide(5, 10, 10);
    }
    catch(int i){
        cout << "Exception Caught!!\n";
    }
}
*/
/*
void test(int x){
    try{
        if(x==1) throw x; // int
        else if(x==0) throw 'x'; // char
        else if(x==-1) throw 1; // double
        cout<<"END of try block \n";
    }
    catch(char c) // catch 1
    {cout << "caught a character \n";}
    catch(int m) // catch 2
    {cout << "caught an integer \n";}
    catch(double d) // catch 3
    {cout << "caught a double \n";}

    cout << "End of try catch system \n\n";
}

int main(){
    cout << "Testing multiple catches \n";
    cout << "x==1 \n";
    test(1);
    cout << "X==0 \n";
    test(0);
    cout << "X==-1 \n";
    test(-1);
    cout << "x==2 \n";
    test(2);
}*/

void test(int x){
    try{
        if (x==0) throw x;
        if (x==-1) throw 'x';
        if (x==1) throw 1.0;
    }
    catch (...)
    {cout << "Caught an exception \n";}
}

int main(){
    cout << "Testing generic catch \n";
    test(-1);
    test(0);
    test(1);
    return 0;
}
