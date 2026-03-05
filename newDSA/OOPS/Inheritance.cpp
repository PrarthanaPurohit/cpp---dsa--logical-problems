#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    char name;
    int marks;
   
};


//child class
class Child1 : public Student{
    public:
    

    void grade(){
        if(marks>90){
            cout<< 'A';
        }
    }
};


int main(){

    Child1 c;
    c.marks= 92;
    
    c.grade();
    return 0;
}