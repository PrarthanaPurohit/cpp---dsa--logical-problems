#include <iostream>
#include <vector>
#include<numeric> 
#include <algorithm>
using namespace std;
int main(){

    vector <int> arr = {10,20,30,40,50};

    //only on sorted array; returns an it value either 0 if not found or 1 if found

    bool it = binary_search(arr.begin(), arr.end(), 34);
    cout<< it<< endl;


    // returns first ele >= value

    auto it2 = lower_bound(arr.begin(), arr.end(), 60);
    cout<< *it2<< endl;

    // returns first ele > value
    auto it3 = upper_bound(arr.begin(), arr.end(), 30);
    cout<< *it3<< endl;

    
    auto it4 = equal_range(arr.begin(), arr.end(),30 ); //retruns pair of iterators pointing to the value if found and next ele
    pair <int, int> p = {*it4.first, *it4.second}; // 0 0 if not found or value, 0 if last ele = value
    cout<< p.first<<" "<< p.second<< endl;
    return 0;


}