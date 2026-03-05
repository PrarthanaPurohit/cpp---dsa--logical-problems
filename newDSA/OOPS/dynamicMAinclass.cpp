#include <iostream>
using namespace std;

class Student{

    public:
    int id;
    int name;
  
    int *gpa; //stored in heap
   

    //paramterized ctor

    Student( int id,  int gpa){
        this -> id = id;  
        
       
        this -> gpa = new int(gpa); //dyanmic memory allocation using new keyword
        
    }

    ~Student(){
        cout<<"Dtor called"<< endl;

        delete this -> gpa;  //manually free memory from heap
    }



};
int main(){
    Student s1(1, 9);
    s1.name; // here name has not been provided so either it will have zero or garbage value
   
    return 0;
}