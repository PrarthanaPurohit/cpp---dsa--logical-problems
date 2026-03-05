#include <iostream>
using namespace std;


//Parent class

class Vehicle{
    public:
    string name;
    string model;

    //ctor
    Vehicle(string _name, string _model){
        this -> name = _name;
        this -> model = _model;
    }
};

//child class
class Car : public Vehicle{
    public:

    int noOfDoors;

    //ctor

    Car( string _name, string _model, int _noOfDoors):Vehicle(_name, _model){

        this -> noOfDoors = _noOfDoors;
    }

    void printData(){
        cout<< "model is:"<< model<< " No. of doors are: "<< noOfDoors<< endl;
    }

};

int main(){

    Car c1 = {"Maruti 800", "LXI", 4};
    c1.printData();
    return 0;

}