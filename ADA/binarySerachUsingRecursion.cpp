# include <iostream>
using namespace std;

int binarySearch( int *arr, int s, int e, int key){

    // base case

    if( s> e){
        return -1;
    }

    int mid = s + (e-s)/2;

    // key will be found at mid if found

    if(arr[mid] == key){
        return mid;
    }

    // left portion

    if( arr[mid] > key){
       return binarySearch( arr, s, mid -1, key);
    }

    // right portion

    if( arr[mid] < key){

       return binarySearch( arr, mid+1, e, key);
    }

    
}

int main(){
    int n; 
    cout<< "Enter size of array:"<< endl;
    cin>> n;

    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cout<< "Enter element of array:"<< endl;
        cin>> arr[i];
    }

    int key;

    cout<<"Enter element(key) to search:"<< endl;
    cin>> key;

    int index = binarySearch( arr, 0, n-1 , key);  // returning mid if found
    if( index != -1){
        cout << "Key found at:"<< index<< endl;}
    else{
        cout<< "Key not found";
    }

    delete []arr; // free allocated memory
    return 0;
}