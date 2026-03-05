#include <iostream>
using namespace std;
#include<limits.h>

// int maxElement( int array[], int n){
//     int max = array[0];
//     for( int i=1; i< n; i++){
//         if(array[i]> max){
//             max = array[i];
//         }
        
//     }
//     return max;

    
    int maxElement( int array[], int n){
    int maxEle = INT_MIN;
    for( int i=0; i< n; i++){
        if(array[i]> maxEle){
            maxEle = max(maxEle, array[i]);
        }
        
    }
    return maxEle;

    
}

int main(){ 
    
    int arr[7];
    int size = 7;
    for(int i = 0; i< size; i++){
        cout<< "Enter value for index "<< i<< " ";
        cin>> arr[i];
    }
    
    int max = maxElement(arr,size);
    cout<< max;


   
    return 0;
}