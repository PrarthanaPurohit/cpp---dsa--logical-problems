#include<iostream>
#include <algorithm>
using namespace std;


void binarySearch(int arr[], int size, int target, int &ansIndex){

    int s = 0;
    int e = size - 1;
    int mid;
    
    while( s<=e){
        mid = s + (e-s)/2;  //bcoz e+s might exceed the MAX_INT so to prevent overflow e-s is divided by 2
        if( target == arr[mid]) {
            ansIndex = mid;
            e = mid - 1; //for finding first occ
            //s = mid + 1; //for finding last occ
        }

        else if( target > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;

        }
    }

   
}

int main(){

    int arr[7] = {5,10,20,20,20,30,40};
    int size = 7;
    int target;
    cin>> target;
    sort(arr, arr + size); //array must be sorted
    int ansIndex = -1;
    binarySearch(arr, size, target, ansIndex);
    cout<< ansIndex;
    return 0;
}
