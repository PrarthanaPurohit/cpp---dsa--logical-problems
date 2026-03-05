# include <iostream>
using namespace std;

class Employee{  //class
    public:

    string name; // variables
    int salary;

    void printDetails()  //method
    {
        cout<< "The name of employee is "<< this->name<<" and her salary is: " << this-> salary<<endl;
    }
};




int main(){      
    Employee riya;      // object
    riya.name = "Riya";
    riya.salary= 5000;
    riya.printDetails();  // function call
}