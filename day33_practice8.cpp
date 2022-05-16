# include <iostream>
using namespace std;
/*
class Alpha{
	int x;

	public:
	Alpha (int i){
		x = i;
		cout <<"Alpha initialized \n";
	}
	void show_x(void){
		cout<<"x = "<< x <<"\n";
	}
};
class Beta{	
	float y;

	public:
	Beta (float j){
		y = j;
		cout<<"Beta initialized\n";
	}
	void show_y (void){
		cout <<"y="<<y <<"\n";
	}
};
class Gamma: public Beta, public Alpha{ // order of execution
	int z, xz;

	public:
		Gamma (int a, float b, int c, int d): Alpha (a), Beta (b){
			z = c;
			xz = d;
			cout<<"Gamma initialized\n";
		}
		void show_xz(void){
			cout<<"z="<<z<<"\n"
			<<"xz = " << xz <<"\n";
		}
};
int main (){
	Gamma G(5, 10.75, 20, 30);
	G.show_x();
	G.show_y();
	G.show_xz();
}
*/

class baseClass{
    public:
        baseClass(){
            cout << "It is a Base Class Constructor.\n";
        }

        ~baseClass(){
            cout << "It is a Base Class Destructor.\n";
        }
};

class derivedClass: public baseClass{
    public:
        derivedClass(){
            cout << "It is a Derived Class Constructor.\n";
        }

        ~derivedClass(){
            cout << "It is a Derived Class Destructor.\n";
        }
};

int main(){
    derivedClass D;
}

/*
class baseClass{
    int a;

    public:
        baseClass(int x){
            cout << "It is a Base Class Constructor.\n";
            a = x;
        }
        void show_a(){
            cout << "a = " << a<< endl;
        }
        ~baseClass(){
            cout << "It is a Base Class Destructor.\n";
        }
};
class derivedClass1{
    int b;

    public:
        derivedClass1(int y){
            cout << "It is a Derived Class1 Constructor.\n";
            b = y;
        }
        void show_b(){
            cout << "b = " << b << endl;
        }
        ~derivedClass1(){
            cout << "It is a Derived Class1 Destructor.\n";
        }
};

class derivedClass2: public baseClass, public derivedClass1{
    int c, d;

    public:
        derivedClass2(int x, int y, int z, int xz): baseClass(x), derivedClass1(y){
            c = z;
            d = xz;
            cout << "It is a Derived Class2 Constructor.\n";
        }
        void show_cd(){
            cout << "c = " << c <<
            << "\n d = " << d << endl;
        }
        ~derivedClass(){
            cout << "It is a Derived Class2 Destructor.\n";
        }
};

int main(){
    derivedClass2 d;
    d.show_a();
    d.show_b();
    d.show_cd();
}
*/