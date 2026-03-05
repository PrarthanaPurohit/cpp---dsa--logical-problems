#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

    // is running but not ethical and supported by every compiler
    // int arr[n];
    // arr[0] = 1;
    // cout<< arr[0];


    //dynamic array
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        int data;
        cin>> data;
        arr[i] = data;
    }
    for(int i=0; i<n; i++){
        
        cout<< arr[i]<< endl;
    }
    return 0;
}