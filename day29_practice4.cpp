// UNARY OPERATOR OVERLOADING

#include<iostream>
using namespace std;
/*
class space{
    int x;
    int y;
    int z;

    public:
    void getdata (int a, int b, int c);
    void display (void);
    void operator - (); // overloaded unary minus
};

void space:: getdata (int a, int b, int c){
    x = a;
    y = b;
    z = c;
}
void space :: display (void){
    cout <<x<< " " ;
    cout << y << " " ;
    cout<< z << "\n" ;
}

void space :: operator - (){ // here operator is a keyword
    x = -x;
    y = -y;
    z = -z;
}

int main (){
    space s;
    s.getdata (10, -20, 30);
    cout << "S:";
    s.display();
    -s; // activates operator-() function
    cout << "S:";
    s.display ();
}
*/

class complex{
    float x;
    float y;

    public:
    complex () {}
    complex (float real, float imag){
        x = real; y = imag;
    }
    
    complex operator + (complex);
    void display();
};

complex complex :: operator + (complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex :: display (void){
    cout<< x << "+j" <<y<<"\n";
}

int main (){
    complex C1, C2, C3; // invokes constructor1
    C1 = complex (2.5,3.5); // invokes constructor 2
    C2 = complex (1.6, 2.7);
    C3 = C1 + C2; // activates operator + () function
    cout<<"C1= " ; C1.display();
    cout<<"C2= " ; C2.display();
    cout<<"C3= "; C3.display ();
}