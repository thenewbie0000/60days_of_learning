// MULTIPLE INHERITANCE
# include <iostream>
using namespace std;
/*
class M{
protected:
    int m;
public:
    void get_m (int);
};
class N{
protected:
    int n;
public:
    void get_n(int);
};

class P: public M, public N{
public:
    void display (void);
};

void M:: get_m(int x)
{m = x;}
void N:: get_n(int y)
{n=y;}

void P:: display(void){
    cout <<"m="<<m<<"\n";
    cout <<"n="<<n<<"\n";
    cout <<"m*n=" << m*n << "\n";
}

int main (){
    P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
    return 0;
}
*/

// AMBUIGITY RESOLUTION USING SCOPE RESOLUTION OPERATOR
/*
class M{
    public:
        void display (void){
            cout<<"class M\n";
        }
};
class N{
    public:
        void display (void){
            cout <<"class N\n";
        }
};
class P: public M, public N{
    public:
        void display(void){ // overrides display () of M and N
            M:: display ();
        }
};
int main (){
    P p;
    p.display();
    return 0;
}
*/

// HYBRID INHERITANCE
#include<string.h>
class student{
    protected:
        char name[20];
        int roll;

    public:
        void get_data(char a[20], int b){
            strcpy(name, a);
            roll = b;
        }
        void put_data(){
            cout << "Name of Student: " << name << endl;
            cout << "Roll No.: " << roll << endl;
        }
};
class sports{
    protected:
        float score1;
    public:
        void get_sport_score(float y){
            score1 = y;
        }        
        void put_sport_score (){
            cout << "Score in Sports: " << score1 << endl;
        }
};

class test:virtual public student{
    protected:
        float score;
    public:
        void get_test_score(float y){
            score = y;
        }        
        void put_test_score (){
            cout << "Score in Test: " << score << endl;
        }
};
class result:virtual public test, virtual public sports, virtual public student{
    protected:
        char a[50];
    public:
        void display(){
            cout << "Enter a name: " << endl;
            cin.getline(a, 50);
            get_data(a, 70);
            get_test_score(59.5);
            get_sport_score(37);
            put_data();
            put_test_score();
            put_sport_score();
        }
};

int main(){
    result r;
    r.display();
}