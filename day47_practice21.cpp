/*
#include<iostream>
#define mul(a,b) a*b        // MACRO DEFINITION
#define add(a,b) a + b
using namespace std;

int main(){
    int a, b;
    cout << "Enter the value of a and b:\n";
    cin >> a >> b;
    cout << a << " x " << b << " = " <<mul(a,b) << endl;
    cout << a << " + " << b << " = " <<add(a, b);
    return 0;
}
*/

//Return By Pointer
#include<iostream>
using namespace std;

int *exchange(int *x, int *y){
    if (*x < *y)
    return x;
    else
    return y;
}

int main(){
    int a, b;
    a = 10;
    b = 99;
    int *m = exchange(&a, &b);
    cout << "Smallest " << *m;
    return 0;
}