// Pointer to classes

#include<iostream>
using namespace std;
/*
class rectangle{
    int l, b;

    public:
        void get_data(int x, int y){
            l = x;
            b = y;
        }

        void show_data(){
            cout << "Area of Rec = " << l*b << endl;
            cout << "Perimeter of Rec = " << 2*(l+b) << endl;
        }
};

int main(){
    rectangle *rec = new rectangle();
    rectangle r;
    rec->get_data(10,20);
    r.get_data(5, 10);
    rec->show_data();
    r.show_data();
}
*/ 

class Complex{
    float real, img;

    public:
        void get_data(){
            cout << "Enter real and image coordinate:\n";
            cin >> real >> img;
        }

        Complex *addComplex(Complex *C){
            C->real = real + C->real;
            C->img = img + C->img;
            return C;
        }

        void display(){
            cout <<"Real: " << real << "\t Imaginary: " << img << endl;
        }
};

int main(){
    Complex C1, C2, *C3;
    C1.get_data();
    C2.get_data();
    
    cout << "Complex1:\n";
    C1.display();
    cout << "Complex2:\n";
    C2.display();

    C3 = C2.addComplex(&C1);    
    cout << "Complex3:\n";
    C3->display();

}