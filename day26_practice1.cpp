/*
// Explicit Type Conversion
#include<iostream>
using namespace std;

int main(){
    double a = 1.2;
    // Explicit conversion from double to int by assignment------- (type)expression
    int sum = (int)a + 1;
    cout << "Sum = " << sum << endl;
  

    float f = 3.5;
    // using cast operator ie static cast
    int b = static_cast<int>(f);
  
    cout << b << endl;

    // Implicit Type Conversion
    int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.67;
  
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
  


    // Reference variable
    int m = 10;
    int n = m;
    m++;
    n += 5;
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    int &o = m;
    o++;
    m++;
    cout << "m = " << m << endl;
    cout << "o = " << o << endl;
    return 0;
}
*/
/*
// FUNCTION OVERLOADING
#include<iostream>
using namespace std;

void print(int i){
    cout << "It is an integer --- " << i << endl;
}
void print(double j){
    cout << "It is a float --- " << j << endl;
}
void print(char k){
    cout << "It is a character --- " << k << endl;
}

int main(){
    print(10);
    print(40.1);
    print('a');
}
*/

// Inlining Function
/*
#include<iostream>
using namespace std;

inline void sum(int x, int y){
    int sum = x + y;
    cout << "Sum = " << sum << endl;
}
int main(){
    sum(10,20);
}
*/

// Pass By Value -> A copy of arguments is passed to the function
// Pass By Reference -> Actual address of the arguments is passed to the function
// Pass By Pointer -> Same as By Reference but uses pointer variable
// Pass By Reference
#include<iostream>
using namespace std;

void exchange1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void exchange2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void exchange3(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    cout << " Before swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    exchange1(a, b);
    cout << " After swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nBefore swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    exchange2(a, b);
    cout << " After swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nBefore swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    exchange3(&a, &b);
    cout << " After swap, " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}