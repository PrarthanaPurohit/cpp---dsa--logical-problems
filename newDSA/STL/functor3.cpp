// use STL sort() to sort in desc order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class comparator{
    public:
    bool operator()(int a, int b){
        return a>b;  //place a before b if a> b //descending order
    }
};
int main(){
    vector <int> arr{10, 20, 5};

    sort(arr.begin(), arr.end(), comparator()); //used my own comparator to sort in descending order

    //print
    for(int a: arr){
        cout<< a<< " ";
    }
    return 0;
}