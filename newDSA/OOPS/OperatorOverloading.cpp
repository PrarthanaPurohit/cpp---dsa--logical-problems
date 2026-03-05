// oparators executes user defined functions allowing customised behavior

// syntax returnType operator <op> (args){ return }

// Add two complex nos  using +

//object A will call function which adds  object B to A
#include <iostream>
using namespace std;

class Complex{

    public:
    int real;
    int img; 
    // Complex(){
    //     real = img = -1;
    // }


    Complex( int r, int i): real(r), img(i){};

    void print(){
        cout<< "[" << this -> real<< "+i" << this -> img<< "]"<< endl;
    }


    // func with return type class -> Complex
    // Object A will call this
    // Object B will be parameter

    Complex operator + ( const Complex &B){

        Complex temp(0,0) ;

        cout<< this-> real << endl;
        cout<< this -> img; cout<< endl;

        temp.real = this -> real + B.real;
        temp.img = this -> img + B.img;

        return temp;

        // temp is obj of class Complex

    }

    //function to check equality
    bool operator == ( const Complex &B){
        return ( this-> real == B.real && this-> img == B.img);
    }
};

int main(){
    Complex A(5,5);
    Complex B(5,5);
    A.print();
    B.print();
    Complex C = A + B;  //A(B)  A's ctor is called and B is paramter
    C.print();

    bool a = A == B;
    cout<< a;
    return 0;
}

