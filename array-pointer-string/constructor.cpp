# include <iostream>
using namespace std;

class Employee{  //class
    public:

    string name; // variables
    int salary;


    Employee( string n, int s){    //constructor
        name = n;
        salary = s;
    }

    void printDetails()  //method
    {
        cout<< "The name of employee is "<< this->name<<" and her salary is: " << this-> salary<<endl;
    }
};




int main(){      
    Employee riya("Riya Purohit", 5000)  ;    // object
    
    riya.printDetails();  // function call
}