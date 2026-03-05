#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    int age;
    string name;


    //Default constructor

    Student(){
        cout<< "Default ctor is called"<<endl;
    }

    //this pointer points to the object we are talking of
    void study(){
        cout<< this -> name<< endl;
    }


    //Dtor

    ~Student(){
        cout<< "Dtor is called";
    }
};
 int main(){

    Student s1;
    s1.id = 1;
    s1.age = 18;
    s1.name = "Riya";
    s1.study();
    return 0;
 }