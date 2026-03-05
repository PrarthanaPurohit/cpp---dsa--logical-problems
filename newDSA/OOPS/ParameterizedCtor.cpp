#include <iostream>
using namespace std;

class Student{

    public:
    int id;
    int age;
    string name;
    int marks;

    //paramterized ctor

    Student( int id, int age, string sname, int marksOfStudent){
        this -> id = id;  //providing values to data members from parameters
        this -> age = age;
        this -> name = sname;
        this -> marks = marksOfStudent;
        cout<< "Ctor called"<< endl;
    }
};
int main(){
    Student s1(1,18,"Riya", 99);
    s1.age = 20;
    cout<< s1.age;
    return 0;
}