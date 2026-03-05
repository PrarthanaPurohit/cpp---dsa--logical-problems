#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int pos = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
}


int main(){
    int size = 6;
    int arr[6] = {1,0,0,2,0,5};
    sort(arr, size);
    for( int i=0; i < size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}