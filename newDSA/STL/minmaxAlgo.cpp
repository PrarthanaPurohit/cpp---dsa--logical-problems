#include <iostream>
#include <vector>
#include<numeric> 
#include <algorithm>
using namespace std;
int main(){

    int a = 10;
    int b= 20;
    cout<< min(a,b)<< endl;
    cout<< max(a,b)<< endl;

    vector <int> arr = {10,20,5,40};
    auto it = min_element(arr.begin(), arr.end());
    cout<< *it<< endl;

    auto it2 = max_element(arr.begin(), arr.end());
    cout<< *it2<< endl;
    return 0;
}