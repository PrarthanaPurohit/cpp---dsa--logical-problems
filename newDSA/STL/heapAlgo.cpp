#include <iostream>
#include <vector>
#include<numeric> 
#include <algorithm>
using namespace std;
int main(){
    vector <int> arr = {22,11,55,66,77};

    //create heap

    make_heap(arr.begin(), arr.end());
    for( int a: arr) cout<< a<< " ";
    cout<< endl;

    // add one ele then see

    arr.push_back(99);
    for( int a: arr) cout<< a<< " ";
    cout<< endl;
    // restore heap property
    push_heap(arr.begin(), arr.end());
    for( int a: arr) cout<< a<< " ";
    cout<< endl;


    //remove max ele from heap
    pop_heap(arr.begin(), arr.end());
    for( int a: arr) cout<< a<< " ";  // max ele moves to the last
    cout<< endl;

    // remove last ele
    arr.pop_back();
    for( int a: arr) cout<< a<< " ";
    cout<< endl;

    //sort in incr order
    sort_heap(arr.begin(), arr.end());
    for( int a: arr) cout<< a<< " ";
    cout<< endl;

    return 0;
}