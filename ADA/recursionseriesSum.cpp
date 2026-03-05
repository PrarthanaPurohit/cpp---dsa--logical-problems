# include <iostream> 
using namespace std;


int sum(int arr[], int size){
    //base case
    if(size == 0)
       return 0;

    if( size == 1)
       return arr[0];

    int remainPart = sum( arr + 1, size - 1);

    int sum = arr[0] + remainPart;

    return sum;
}

int main(){
    
    
    int arr[5] = {1, 1, 2, 3, 4};
    int size  = 5;

    int ans = sum( arr, 5);
    cout<< ans;

    
    return 0;



}