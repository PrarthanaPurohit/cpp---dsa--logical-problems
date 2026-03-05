#include<iostream>
using namespace std;
void count(int arr[], int size){
    int count1 = 0;
    int count0 = 0;
    for(int i = 0; i< size; i++){
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==0){
            count0++;
        }
    }

    cout<< "no of ones: "<< count1<< " no of zeros: "<< count0;

}

int main(){
    int arr[5] = {1,1,0,1,0};
    int size = 5;
    count(arr,size);
    return 0;
}