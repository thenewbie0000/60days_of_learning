// VIRTUAL DESTRUCTOR
/*
#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "Constructing Base" << endl;
        }

        virtual ~Base(){
            cout << "Destructing Base" << endl;
        }
};

class Derived: public Base{
    public:
        Derived(){
            cout << "Constructing Derived" << endl;
        }

        virtual ~Derived(){
            cout << "Destructing Derived" << endl;
        }
};

int main(){
    Derived *d = new Derived();
    Base *b = d;
    delete b;
    return 0;
}
*/

// CLASS TEMPLATE
#include<iostream>
using namespace std;

template <class T1, class T2>
class Test{
    T1 x; T2 y;
    public:
        Test(T1 a, T2 b){
            x = a;
            y = b;
        }

        void show(){
            cout << x << "\t" << y << endl;
        }
};

int main(){
    Test<float, int>test1(1.23, 1.23);
    Test<char, float>test2('a', 1.23);
    test1.show();
    test2.show();
}