#include <iostream>
#include <vector>
#include<numeric> 
using namespace std;
int main(){

    vector <int> arr = {10,20,30,40,50};

    //calci sum of ele
    cout<< accumulate ( arr.begin(), arr.end(), 1000)<< endl; //initial sum is 1000


    //2 arrs k product ka sum
     
     vector <int> arr2 = {1,2,3};
     vector <int> arr3 = {3,4,5};
     cout<< inner_product(arr2.begin(), arr2.end(), arr3.begin(), 1000)<< endl; 

     //1, sum of 1+2, sum of 1+2+3
     
     vector <int> arr4 = {1,2,3,4};

     //to store result
     vector <int> result(arr4.size());

     partial_sum(arr4.begin(),arr4.end(), result.begin());

     for(int a:result) cout<< a << " " ;

     cout<< endl;

     //iota initialses with incrementing values

     vector <int> arr5(7);
     iota(arr5.begin(), arr5.end(), 250);
     for(int a: arr5) cout<< a << " ";
     
    return 0;
}