#include <iostream>
using namespace std;

//in multiple inh, one class is derived from two or more classes

class A{

    public:

    int id;
    string name;

    public:

    A(int id, string sname){
        this -> id = id;
        this -> name = sname;
    }

};

class B{

    public:
    int marks;

    public:

    B( int marks){
        this -> marks = marks;
    }
};

//Derived class

class C: public A, public B{

    public:
    int subjectCode;
    char grade;

      C(int id, string name, int marks, int subCode):A(id, name), B(marks){
        // this -> subjectCode = subCode;
    };

    

    void cal(){

        if(marks > 90){
            grade = 'A';
        }
        else if(marks > 80){
            grade = 'B';
        }
        else if(marks > 60){
            grade = 'C';
        }
        
    }



    void printData(){
        cout<< "Name is:"<< name<<" "<< "Grade is: "<< grade<< endl;
    }
};
int main(){

    C obj1(101, "Riya", 84, 12);
    obj1.cal();
    obj1.printData();

    return 0;
}