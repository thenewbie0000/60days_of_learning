// NESTING RANDOM FUNCTION IN CLASS
/*
#include<iostream>
using namespace std;

class Set{
    private: 
    int m, n;

    public:
        void input();
        void display();
        int largest();
};

void Set :: input(){
    cout << "Enter any two numbers:\n";
    cin >> m >> n;
}

int Set :: largest(){
    if (m >= n)
        return m;
    else   
        return n;
}

void Set :: display(){
    cout << "The largest number is " << largest() << endl;
}

int main(){
    Set A1;
    A1.input();
    A1.display();
    return 0;
}
*/

// PARAMETERIZED CONSTRUCTOR
/*
#include<iostream>
using namespace std;

class Integer{
    int x, y;

    public:
        Integer(int a, int b){
            x = a;
            y = b;
        }

        void display();
};

void Integer :: display(){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int main(){
    Integer I1 = Integer(10, 20);   // EXPLICIT CALL
    Integer I2(20,30);              // IMPLICIT CALL(SHORTHAND METHOD)
    I1.display();
    I2.display();
    return 0;           
}
*/

// COPY CONSTRUCTOR
/*
#include<iostream>
using namespace std;

class Copy{
    int id;

    public:
        Copy(){}    // Constrcutor Initialization

        Copy(int x){
            id = x;
        }

        Copy(Copy &y){
            id = y.id;
        }

        void display()
        {cout << id; }
};
int main(){
    Copy A(20);
    Copy B(A);
    Copy C = A;
    Copy D;
    D = B;

    cout<< "\n id of A: "; A.display();
    cout<< "\n id of B: "; B.display();
    cout<< "\n id of C: "; C.display();
    cout<< "\n id of D: "; D.display();
}
*/

// OVERLOADING CONSTRUCTOR
/*
#include<iostream>
using namespace std;

class Integer{
    float i, j;

    public:
        Integer(){
            i = 0;
            j = 0;
        }

        Integer(float real, float imag){
            i = real;
            j = imag;
        }

        Integer(float real){
            i = j = real;
        }

        void display(){
            cout << i << " + j" << j << endl;
        }
};

int main(){
    Integer I1;
    I1.display();
    Integer I2 = Integer(1.5, 2.1);
    I2.display();
    Integer I3(9.8);
    I3.display();
}
*/

// DESTRUCTOR

#include<iostream>
using namespace std;
int i = 0;

class Destroy{
    public:
        Destroy(){
            i++;
            cout << i << endl;
        }

        ~Destroy(){
            i--;
            cout << i << endl;
        }
};

int main(){
    {
        cout << "MAIN BLOCK\n";
        Destroy D1;
        {
            cout << "Entering Inside:\n";
            Destroy D2;
            {
                cout << "Entering Further\n";
                Destroy D3;
            }
            cout << "Existing Inside:\n";
        }
        cout << "Existing Main:\n";
    }
}


// DYNAMIC CONSTRUCTOR
/*
#include<iostream>
#include<string.h>
using namespace std;

class String1{
    char *name;
    int length;

    public:
        String1(){
            length = 0;
            name = new char [length +1];
        }

        String1(char *s){
            length = strlen(s);
            name = new char [length +1];
            strcpy(name, s);
        }

        void display(){
            cout << name << endl;
        }

        void join(String1 &a, String1 &b){
            length = a.length + b.length;
            delete name;
            name = new char [length + 1];
            strcpy(name, a.name);
            strcpy(name, b.name);
        }
};

int main(){
    char *first = "AMRIT";
    char *second = "CAMPUS";
    char *third = "THAMEL";
    String1 name1(first), name2(second), name3(third);
    String1 S1, S2;
    S1.join(name1, name2);
    S2.join(S1, name3);
    name1.display();
    name2.display();
    name3.display();
    S1.display();
    S2.display();
    return 0;
}
*/