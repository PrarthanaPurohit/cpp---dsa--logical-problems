#include <iostream> 
using namespace std;

void printpairs(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<< arr[i]<<", "<< arr[j]<< ")";
            if(j!= n-1){
                cout<< " , ";}
        }
        cout<< endl;
        
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    printpairs(arr, size);
    return 0;
}