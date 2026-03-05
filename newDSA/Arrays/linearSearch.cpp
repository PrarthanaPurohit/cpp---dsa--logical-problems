#include <iostream>
using namespace std;

int linearSearch( int array[], int n, int ele){
    for( int i = 0; i<n; i++){
        if(array[i] == ele){
            return i;
        }
    }
    return -1;

    
}

int main(){ 
    
    int arr[7];
    int size = 7;
    for(int i = 0; i< size; i++){
        cout<< "Enter value for index "<< i<< " ";
        cin>> arr[i];
    }
    cout<<"Insert an element to be searched:\n";
    int element;
    cin >> element;
    int index = linearSearch(arr,size,element);

    if( index!= -1){
        cout<< "Element found at index:"<< index;
    }
    else{
        cout<< "Element not found";
    }

    return 0;
}