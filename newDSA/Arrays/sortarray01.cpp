#include<iostream>
using namespace std;
#include<algorithm>
// APPROAH 3: 2 POINTERS
// void sorting(int arr[], int n){
//     int pos = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
// }


//APPROACH 2: COUNTING

void sorting(int arr[], int n){
    int count0 = 0;
    int count1 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
    }

    //insert
    // for(int i=0; i<count0; i++){
    //     arr[i]= 0;
    // }
    // for(int i= count0; i<n; i++){
    //     arr[i]= 1;
    // }
    fill(arr, arr+count0, 0);
    fill(arr+count0, arr+n,1);
}

//APPROACH 3
// void sorting(int arr[], int n){
//     sort(arr,arr+n);
// }


int main(){
    int size = 20;
    int arr[20] = {1,0,0,1,1,0,1,1,1,1,1,0,0,0,0,0,1,0,1,0};
    sorting(arr, size);
    for( int i=0; i < size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}