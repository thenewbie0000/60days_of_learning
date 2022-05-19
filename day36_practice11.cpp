/*
#include<iostream>
using namespace std;

// local variable is same as a member's name 
class Test{
    private:
        int x;
    public:
        void setX (int x){
            // The 'this' pointer is used to retrieve the object's x
            // hidden by the local variable 'x'
            this->x = x;
        }
        void print() { cout << "x = " << x << endl; }
};

int main(){
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}
*/
/*
# include<iostream>
using namespace std;
class X {
    int a,b;
    public:
        void input(){
            this -> a = 10;
            this -> b = 11;
        }
        void output () {
            cout<<a<<"   "<<b; 
        }
};
int main(){
    X ob;
    ob.input();
    ob.output();
    return 0;
}
*/

# include<iostream>
# include<cstring>
using namespace std;
class person {
    char name[20];
    float age;
    public:
        person (char *s, float a){
            strcpy (name, s);
            age = a;
        }
        person greater (person & x){
            if (x.age>=age)
            return x;
            else
            return *this;
        }
        void display (void){
            cout <<"\n name:"<<name;
            cout<<"\n age:"<<age;
        }
};
int main(){
    person p1 ("John", 37.50),p2("jack", 29.0), p3("Jim", 40.25);
    person p = p1.greater(p3); // p3.greater (p1)
    cout<<"\n elder person is:";
    p.display();
    p = p1.greater(p2); // p2.greater (p1)
    cout<<"\n elder person is::";
    p.display ();
    return 0;
}
