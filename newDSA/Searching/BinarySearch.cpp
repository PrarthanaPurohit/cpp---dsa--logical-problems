#include<iostream>
#include <algorithm>
using namespace std;


bool binarySearch(int arr[], int size, int target){

    int s = 0;
    int e = size - 1;
    int mid;
    
    while( s<=e){
        mid = s + (e-s)/2;  //bcoz e+s might exceed the MAX_INT so to prevent overflow e-s is divided by 2
        if( target == arr[mid]) return true;

        else if( target > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;

        }
    }

    return false;
}

int main(){

    int arr[7] = {2,4,3,5,8,9,0};
    int size = 7;
    int target;
    cin>> target;
    sort(arr, arr + size); //array must be sorted
    int ans = binarySearch(arr, size, target);
    if(ans == 1){
        cout<< "Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}
