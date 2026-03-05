#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDouble(int a){
    cout<< 2*a<< " ";
}

bool checkEven( int a){
    return a%2 == 0; 

}
int main(){

    vector <int> arr = {11,20,11,40};

    for_each(arr.begin(), arr.end(), printDouble);
    cout<< endl;

    int target = 20;

    auto it = find(arr.begin(), arr.end(), target);
    cout<< * it << endl;

    auto it2= find_if(arr.begin(), arr.end(), checkEven);
    cout<< *it2<< endl;


    cout<< count(arr.begin(), arr.end(), 11) << endl;

    cout<< count_if( arr.begin(), arr.end(), checkEven)<< endl;

    sort(arr.begin(), arr.end());

    for( int i: arr) cout<< i << " ";
    cout<< endl;

    reverse(arr.begin(), arr.end());

    for( int i: arr) cout<< i << " ";
    cout<< endl;

    rotate(arr.begin(), arr.begin() + 3, arr.end());

    for( int i: arr) cout<< i << " ";
    cout<< endl;

    vector <int> arr2 = {4,3,2,1,1};

    auto it3 = unique(arr2.begin(), arr2.end());  //req sorted arr
    arr2.erase(it3, arr2.end());  //erase after it part containing duplicates
    for( int i: arr2) cout<< i << " ";
    cout<< endl;

    auto it4 = partition( arr.begin(), arr.end(), checkEven); //creates partition acc to func 
  
    for( int i: arr) cout<< i << " ";











    
    return 0;
}