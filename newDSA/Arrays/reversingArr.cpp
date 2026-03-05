#include <iostream>
using namespace std;

void reversing(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    reversing(arr,size);
    for(int i= 0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}