#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <string> lang = {"cpp","java","python"};

    vector <string> :: iterator it = lang.begin();

    while(it != lang.end()){
        cout<< *it<< " ";
        it++;
    }  
    cout<< endl;

    //for pair (*it.first) or it -> first

    //forward traversal
    vector <int> v = {1,2,3,4};

    vector <int> :: iterator it1 = v.begin();

    while(it1!=v.end()){
         *it1 = *it1 + 2; //write op
         cout << *it1 << " ";
         it1++; //read op

    }


    cout<< endl;

    vector <int> :: iterator it3 = v.end();

    while(it3!=v.begin()){
         it3--; // nothing on v.end(); Also to print first ele
         cout << *it3 << " "; 

    } cout<< endl;

    vector <int> :: iterator it2 = v.begin() + 2;
    cout<< *it2;


    cout<< endl;

    cout<< (it2 == it3)<< endl;
    it2 = it3; //assign position
    cout<< (it2 == it3)<< endl;
    cout<< (it2 != it3)<< endl;
    


    return 0;

}