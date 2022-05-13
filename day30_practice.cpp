//  BASIC TO BASIC TYPE CONVERSION
#include<iostream>
using namespace std;
/*
int main(){
    float b = 4.4;
    int c;
    c = (int)b;
    cout<<c;
    return 0;
}
*/

// BASIC TO USER DEFINED
/*
class X{
    int z;
    char y;

    public:
        X() { }

        X (char p){
            z = (int)p;
            y = p;
        }
        
        void show(){
            cout<<z<<y;
        }
};

int main (){
    char s = 'a';
    X x1;
    x1 = s; // calls parameterized constructor. 's' is basic type and x1 is class type.
    x1.show();
    return 0;
}
*/

// USER DEFINED TO BASIC
/*
#include<math.h>
using namespace std;
class Hour{
    int hr;

    public:
        operator int(){
            int minute;
            minute= hr * 60;
            return (minute);
        }

        void getdata(){
            cout<<"Enter Hours: ";
            cin>>hr;
        }
};

int main(){
    Hour h1;
    float min;
    h1.getdata();
    min = h1; //basic to user defined type
    cout<<"Minutes = "<<min;
}
*/

//  Class type to Class type conversion using constructor in the destination class: Rectangle to Polar
#include<math.h>
using namespace std;

class rectangle{ 
    float x,y;
    public:
    rectangle(float a, float b){ 
        x=a;
        y=b;
    }
    float get_x()
    { return(x);}

    float get_y()
    { return(y);}
};

class polar{ 
    float radius,thita;

    public:
        void show();
        polar(){ }

        polar(rectangle r){
            float tempx=r.get_x();
            float tempy=r.get_y();
            radius = sqrt(tempx*tempx + tempy*tempy);
            thita = atan(tempy/tempx);
        }
};

void polar :: show(){ 
    cout<<"radius is:"<<radius<<endl;
    cout<<"thita is:"<<thita*(180/3.14);
}

int main(){
    rectangle r(6,9);
    polar p(r);
    p.show();
    return 0;
}