#include <iostream>
using namespace std;


void sorting(int arr[], int n){

    int count = 0;
    int pos = 0;
    for(int i = 0; i<n; i++){

        if(arr[i]==0){
            swap(arr[i], arr[pos]);
                pos++;
            }
        }

    count = pos;

    for( int i=0; i<n; i++){
       
        for(int i =count; i<n; i++){
             if(arr[i]==1){
             swap(arr[i], arr[count]);
                count++;
            }}
        }

    }
void print(int arr[], int n){
    for( int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
}

int main(){
    int arr[5] = {1,0,1,2,0} ;
    int size = 5;
    sorting(arr, size);
    print(arr, size);
    
    return 0;

}