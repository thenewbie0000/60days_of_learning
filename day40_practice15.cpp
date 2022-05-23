/*
#include <iostream>
using namespace std;
template <class T>

void swap1(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
}
void fun (int m, int n, float a, float b){
	cout <<"m and n before swap: "<<m<<" "<<n<<"\n";
	swap1 (m,n);
	cout <<"m and n after swap: "<<m<<" "<<n<<"\n";	
	cout <<"a and b before swap: "<<a<<" "<<b<<"\n";
	swap1(a,b);
	cout <<"a and b after swap: "<<a<<" "<<b<<"\n";
}

int main(){
	fun(100,200,11.22,33.44);
	return 0;
}
*/

// TEMPLATE OVERLOADING
/*
#include<iostream>
using namespace std;

template <class T>

void display(T a){
    cout << "Template Value: " << a << endl;
}
void display(int a){
    cout << "Explicitly Value: " << a << endl;
}

int main(){
    display(10.5);
    display(10);
    display("a");
}
*/

// TYPE CONVERSION USING TEMPLATE
#include<iostream>
#include<math.h>
using namespace std;

template<class T>
class rectangle{
    T x;
    T y;

    public:
        rectangle(T a, T b){
            x = a;
            y = b;
        }

        float return_x()
        {return x;}

        float return_y()
        {return y;}
};

template<class T1>
class polar{
    T1 radius;
    T1 thita;

    public:
        polar(){}
        polar(rectangle<float> T){
            T1 temp_x = T.return_x();
            T1 temp_y = T.return_y();
            radius = sqrt(temp_x*temp_x + temp_y*temp_y);
            thita = atan(temp_y/temp_x);
        }

        void display(){
            cout << "Radius = " << radius << endl;
            cout << "Thita = " << thita*180/3.14 << endl;
        }
};

int main(){
    rectangle<float>r(8.0, 6.0);
    polar<float>p(r);
    p.display();
}