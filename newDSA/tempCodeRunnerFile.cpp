#include <iostream>
#include <vector>
#include<numeric> 
#include <algorithm>
using namespace std;
int main(){

    vector <int> arr = {10,13,14,15};

    //only on sorted array; returns an it value either 0 if not found or 1 if found

    bool it = binary_search(arr.begin(), arr.end(), 14);
    cout<< *it<< endl;
    return 0;


}