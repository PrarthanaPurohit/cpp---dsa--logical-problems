#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> marks){
    int size = marks.size();
    for(int i=0; i<size; i++){
        cout<< marks.at(i)<< " ";
    }
    cout<< endl;
}
int main(){
    vector <int> marks; //has no value
    vector <int> marks2(10); //size , initialised with zeros
    vector <int> marks3(10, 5); //size, value

    // print(marks);
    // print(marks2);
    // print(marks3);

    //marks.begin() and marks.end() returns iterators poiting to the first ele pos and pos after last ele resp.

    //cout<< *(marks.begin()) << endl;  //return error
    // cout<< *(marks2.begin()) << endl;
    // cout<< *(marks3.begin()) << endl;

    // cout<< *(marks2.end()) << endl;
    // cout<< *(marks3.end()) << endl;


    // cout<< marks.size()<< endl; //return no. of ele present 
    // cout<< marks2.size()<< endl; 
    // cout<< marks3.size()<< endl; 

    // cout<< marks.capacity()<< endl; //return no. of ele present 
    // cout<< marks2.capacity()<< endl; 
    // cout<< marks3.capacity()<< endl; 

    // vector <int> marks4;
    // //cout<< marks4.capacity()<<endl;
    // marks4.push_back(5);
    // //cout<< marks4.capacity()<< endl;
    // marks4.push_back(10);
    // //cout<< marks4.capacity()<< endl; 
    // marks4.push_back(3);
    // //<< marks4.capacity()<< endl;
    // marks4.pop_back();
    // //cout<< marks4.capacity();

    // cout<< marks4.empty();  //returns 1 if empty

    // cout<< marks4.front()<< endl; // returns 1st ele
    // cout<< marks4.back()<< endl; //returns last ele

    // cout<< marks4.size()<< endl;
    // cout<< marks4.capacity()<< endl;

    // marks4.clear();

    // cout<< marks4.size()<< endl;
    // cout<< marks4.capacity()<< endl;

//     vector <int> vec1(10);

//     //vec1[0] = 100;
//    // cout<< vec1[0]<< endl;
//    // cout<< vec1[9]<< endl;
//     vec1[10]=300; // run but won't reflect changes in vector coz 10 is out of size
//     //cout<< vec1[20];

//     vec1.at(1) = 10;
//     vec1.at(11) = 1000; // error; won't even run

//     print(vec1);

    

// vector <int> v1;
// cout<< v1.capacity()<< endl;
// v1.reserve(9); // setting 10 capacity
// cout<< v1.capacity()<<endl;
// cout<< v1.max_size();


// vector<int> v4 = {1,2,3,4};
// v4.insert(v4.begin(),50); //uses interator for specifying pos
// //cout<< v4[0]<< endl;
// //cout<< v4.capacity();
// v4.insert(v4.end(),100);
// v4.erase(v4.begin());
// //v4.erase(v4.end()); //error

// v4.erase(v4.begin(),v4.end());


// print(v4);
// cout<< v4.size(); 



//SWAP

// vector <int> first = {1,2,3,4};
// vector <int> second = {10,20,30,40,50};
// cout<< first.capacity()<< endl;
// cout<< second.capacity()<< endl;
// first.swap(second);   // both vectors can have different sizes and capacities

// //for each loop for printing
// cout<< first.capacity()<< endl;
// cout<< second.capacity()<< endl;
// for( int i: first){   //for each int i in vector first
//     cout<< i<< " ";
// }

// cout<< endl;


// // printing using iterator

// vector<int> :: iterator it = second.begin();   // creating iterator for vector <int> and poiting it to beginning of second 
// while(it != second.end()){
//     cout<< *it << " "; // printing value at pos pointed by it
//     it++;
// }


vector <int> vx;
vx.push_back(10);
vx.push_back(20);
vx.push_back(10);
cout<< vx.capacity()<< endl;

vector <int> vy;
vy.push_back(10);
vy.push_back(20);

cout<< vy.capacity()<< endl;

vx.swap(vy);
cout<< vx.capacity()<< endl;
cout<< vy.capacity()<< endl;




    return 0;
 
 
}