#include <iostream>
using namespace std;

// A func in Parent class 
// redefined in child class
// So when the func is called by parent or child object,
// the definition will be called on the basis of type of object on runtime
// uses virtual and override keyword

class Shape { //final here will stop inheritance
    public:

    virtual void draw() {  //if I use final keyword after () then it will stop overriding even if virtual 
        cout<< "Generic Drawing"<<endl;
    }

};

//inheritance 

class Circle: public Shape{
    public:

    void draw() override{  //override has no purpose just for clarification

        cout<< "Circle Drawing"<< endl;

    }
};

class Triangle: public Shape{
    public:

    void draw() override {

        cout<< "Triangle Drawing"<< endl;

    }
};

void shapeDrg( Shape *s){
    s->draw();
}

int main(){

    // object banao child class ka par hold karo parent m  -> upcasting

    Shape *s = new Circle(); //ctor

    //OR

    // Circle c;
    // Shape *s = &c;

    s-> draw(); //if no virtual keyword then o/p is generic drg instead of circle drg

    //DOWNCASTING

    //Circle * c3 = new Shape(); //not allowed coz unsafe if we do reverse relationship with parent-child classes

   

   
    return 0;
}
