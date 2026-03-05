#include<iostream>
using namespace std;

// void singleEle(int arr[], int n){
    
//     for(int i=0; i< n; i++){
//         int count=0;
//         for(int j = 0 ; j< n; j++){
//             if(arr[i]==arr[j] && i!=j){
//                 count++;
//                 break;
//             }
        
//         }
//         if(count==0){
//             cout<< arr[i] << " ";
//         }
       

//     }
// }


// Time  complexity linar, space complexity constant

int singleEle( int arr[], int n){
    int ans = 0;
    for( int i=0; i<n; i++){
        ans = ans^arr[i];   // 3^6^7^7^6 = 3
    }

    return ans;

}

int main(){
    int arr[5] = {1,2,3,2,1};
    int size = 5
    ;
    int nonrepeat = singleEle(arr,size);
    cout<< nonrepeat;
    return 0;
}