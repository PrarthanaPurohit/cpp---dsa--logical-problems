#include <iostream>
#include <vector>
using namespace std;

// comparison between objects of a class

class Student{
    public:
    int marks;
    string name;
    Student(){

    }
    Student( int m, int n){
        this -> marks = m;
        this -> name = name;
    }
};

class StudentComparator{
    public:
    bool operator()(Student a, Student b){
        return a.marks < b.marks; //sort in asc order
    }
};

int main(){
    Student s1;
    s1.marks = 95;
    s1.name = "Riya";
    Student s2;
    s2.marks = 80;
    s2.name = "Diya";

    StudentComparator cmp;

    if(cmp(s1,s2)){
        cout<< "Riya's marks are lesser";
    }

    else{
        cout<<"Diya's marks are lesser";
    }

    return 0;
}