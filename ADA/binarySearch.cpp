# include <iostream>
using namespace std;

// in binary search array must be sorted either asc or desc

int binarySearch( int *arr, int n, int key){
    int s=0;
    int e = n-1;   // n is length of arr
    int mid = s + (e-s)/2;  // 2^31 -1
    while(s<=e){
        if( key == arr[mid]){
            return mid;
        }

        if( key < arr[mid]){

            e = mid - 1;   // left part

        }

        else{

            s = mid + 1;  // right part
        }

        mid  = s + (e-s)/2;  // update mid

    }

    return -1; // return -1 if key not found
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

    int index = binarySearch( arr, n, key);

    if( index != -1){
        cout << "Key found at:"<< index<< endl;}
    else{
        cout<< "Key not found";
    }
    
    
}