#include<iostream>
using namespace std;
/*
#include<math.h>
#define PI 22/7

class Polar{
	float thita;
	float radius;

	public:
		Polar(){}

		Polar(float a, float b){
			thita = a;
			radius = b;
		}

		float return_thita(){
			return thita;
		}	

		float return_radius(){
			return radius;
		}

};

class Rectangle{
	float x;
	float y;

	public:
		Rectangle(){}

		Rectangle(Polar P){
			float temp_r = P.return_radius();
			float temp_t = P.return_thita();
			x = temp_r * cos(temp_t);
			y = temp_r * sin(temp_t);
		}

		void display(){
			cout << "X- coordinate = " << x << endl;
			cout << "Y- coordinate = " << y << endl;
		}
};

int main(){
	Polar P;
	P = Polar(56.338*PI/180, 10.8167);
	Rectangle R(P);
	R.display();
	return 0;
}
*/

// INHERITANCE
// SINGLE INHERITANCE
/*
class B{
    int a; //private, not inheritable
    public:
        int b;
        void get_ab();
        int get_a (void);
        void show_a(void);
};
class D: public B{ // public derivation
    int c;

    public:
        void mul(void);
        void display(void);
};

void B:: get_ab(void){
    a = 5; b = 10; 
}
int B:: get_a(){
    return a; 
}
void B:: show_a(){
    cout << "a=" << a << "\n";
}
void D:: mul(){
    c = b * get_a(); // a is private can not be inherited 
}

void D:: display(){
    cout << "a=" << get_a() << "\n";
    cout << "b=" << b << "\n";
    cout << "c=" << c << "\n";
}

int main(){
    D d;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();
    return 0;
}
*/

// Single inheritance private derivation:
/*
# include <iostream>
using namespace std;
class B{
    int a;
    public:
        int b;
        void get_ab();
        int get_a(void);
        void show_a(void);
};

class D: private B{
    int c;
    public:
    void mul (void);
    void display (void);
};
void B:: get_ab(void){
    cout<< "Enter value for a and b\n";
    cin>> a >>b;
}
int B:: get_a(){
    return a;
}
void B:: show_a (){
    cout <<"a = " << a <<"\n";
}
void D:: mul (){
    get_ab();
    c =b * get_a(); // a is private
}
void D:: display(){ 
    show_a();
    cout<<"b="<< b << "\n";
    cout<<"c="<<c<<"\n";
}
int main(){ 
    D d;
// d.get_ab(); won’t work
    d.mul();
// show_a(); won’t work
    d.display();
//d.b = 20; won’t work b is private
    return 0;
}
*/

// MULTI LEVEL INHERITANCE
# include <iostream>
using namespace std;
class student{
    protected:
        int roll_number;
    public:
        void get_number (int);
        void put_number (void);
};
void student:: get_number (int a){
     roll_number = a;
}
void student:: put_number(){
    cout << "roll number:" << roll_number <<"\n";
}
class test: public student{ // first derivation
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks (float, float);
        void put_marks (void);
};
void test:: get_marks (float x, float y){
    sub1 = x;
    sub2 = y;
}
void test:: put_marks (){
    cout << "marks in sub1 = "<< sub1 <<"\n";
    cout << "marks in sub2 = "<< sub2 <<"\n";
}
class result: public test{ // second derivation
    float total;
    public:
    void display (void);
};
void result:: display (void){
    total = sub1 + sub2;
    put_number ();
    put_marks();
    cout << "\n total = " << total;
}

int main (){
    result student1;
    student1.get_number (111);
    student1.get_marks (75.0, 59.5);
    student1.display();
}
