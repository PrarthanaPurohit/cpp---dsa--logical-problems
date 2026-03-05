#include <iostream>
//priority_queue of Student class
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;



class Student{
    public:
    int marks;
    string name;

    
    Student() {} 

    Student(int m , string n){
        this -> marks = m;
        this -> name = n;
    }
};
class Comparator{
    public:
    bool operator()( Student a,  Student b){
        //max marks; high priority
        return a.marks< b.marks;  //increasing order
    }
};

int main(){
    priority_queue<Student, vector<Student>, Comparator> pq;

    pq.push(Student(90, "Riya"));
    pq.push(Student(85, "Meera"));
    pq.push(Student(70, "Siya"));

    cout<< pq.top().marks << " "<< pq.top().name<< endl;
    pq.pop();
    cout<< pq.top().marks << " "<< pq.top().name<< endl;
    pq.pop();
    cout<< pq.top().marks << " "<< pq.top().name<< endl;



    
    return 0;
}