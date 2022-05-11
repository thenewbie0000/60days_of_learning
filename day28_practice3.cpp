// OBJECT AS A FUNCTION ARGUMENT

#include<iostream>
using namespace std;
/*
class Time{
    int hours;
    int minute;

    public:
        void get_time(int a, int b){
            hours = a;
            minute = b;
        }

        void put_time(){
            cout << hours << " hours and " << minute << " minutes.\n";
        }

        void sum(Time T1, Time T2){
            minute = T1.minute + T2.minute;
            hours = minute / 60;
            hours = T1.hours + T2.hours + hours;
            minute = minute % 60;
        }
};

int main(){
    Time T1, T2, T3;
    T1.get_time(2, 70);
    T2.get_time(4, 60);
    T3.sum(T1, T2);
    cout << "T1:\n";
    T1.put_time();
    cout << "T2:\n";
    T2.put_time();
    cout << "Sum:\n";
    T3.put_time();
    return 0;
}
*/

// RETURNING OBJECTS FROM FUNCTION
/*
class Example {
    public:
        int a;

    Example add(Example Ea, Example Eb){
        Example Ec;
        Ec.a = Ea.a + Eb.a;
        // returning the object
        return Ec;
    }
};

int main(){
    Example E1, E2, E3;
    E1.a = 50;
    E2.a = 100;
    E3.a = 0;
    cout << "Initial Values \n";
    cout << "Value of object 1: " << E1.a
    << "\nobject 2: " << E2.a
    << "\nobject 3: " << E3.a
    << "\n";
    // Passing object as an argument
    // to function add()
    E3 = E3.add(E1, E2);
    cout << "\n\nNew values \n";
    cout << "Value of object 1: " << E1.a
    << "\nobject 2: " << E2.a
    << "\nobject 3: " << E3.a
    << "\n";
    return 0;
}
*/

class item{
    static int count; //count is static
    int number;

    public:
        void getdata(int a){
            number=a;
            count++;
        }
        void get_count(void){
            cout<<"count:";
            cout<<count<<endl;
        }
};

int item :: count; //count defined

int main( ){
    item a,b,c;
    a.get_count( );
    b.get_count( );
    c.get_count( );
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"after reading data : "<<endl;
    a.get_count( );
    b.get_count( );
    c.get_count( );
    return(0);
}