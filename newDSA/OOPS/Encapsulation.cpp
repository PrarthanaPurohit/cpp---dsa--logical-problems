#include <iostream>
using namespace std;

class Student{
    private:
    int id;
    float *gpa;

    public:
    Student(){

    }

    Student(int id, float gpa){
        this -> id = id;
        this -> gpa = new float(gpa);
    }

     void setGpa(float a){
        *this -> gpa = a;
    }

    float getGpa() const{
        return *this -> gpa;
    }
};

int main(){
   //Student s2(1, 9.8); //accessible

   Student s1;
   s1.setGpa(9.8);
   float a = s1.getGpa();
   cout<< a;
   return 0;
}
