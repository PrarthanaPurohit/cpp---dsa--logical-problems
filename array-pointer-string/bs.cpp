#include <iostream> 
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s =0;
    int e = size - 1;
    while(s<=e){
       int mid = s + (e-s)/2;
       if(key== arr[mid]){
        return mid;
       }
       if(key<arr[mid]){
         e = mid -1;
       }
       else{
         s = mid+1;
       }
      
    }
    return -1;

}
int main(){

    int arr[] = { 10, 20 ,30, 40, 50};
    int size = 5;

    int key;
    cin>>key;
    cout<<binarySearch(arr, size, key);
    return 0;
}