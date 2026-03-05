#include <iostream>
#include <vector>
#include<numeric> 
#include <algorithm>
using namespace std;
int main(){
    vector <int> arr1 = {1,2,3,4};
    vector <int> arr2 = {3,4,5,6};

    vector <int> result1;
    set_union(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result1, result1.begin()));

    for(int a: result1) cout<< a <<" ";
    cout<< endl;

    vector <int> result2;
    set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result2, result2.begin()));

    for(int a: result2) cout<< a <<" ";
    cout<< endl;

    vector <int> result3;
    set_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result3, result3.begin()));

    for(int a: result3) cout<< a <<" ";
    cout<< endl;


    vector <int> result4;
    set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result4, result4.begin()));

    for(int a: result4) cout<< a <<" ";
    cout<< endl;
    return 0;
}