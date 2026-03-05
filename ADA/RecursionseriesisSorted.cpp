# include <iostream> 
using namespace std;


bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1)
       return true;

    if(arr[0]>arr[1]){
        return false;}
    else{

        bool sort = isSorted( arr + 1, size - 1);
        return sort;
    }
    
}

int main(){
    
    
    int arr[5] = {12,14,16,18,20};
    int size  = 5;

    bool ans = isSorted( arr, 5);

    if(ans){
        cout<<"sorted";
    }

    return 0;



}