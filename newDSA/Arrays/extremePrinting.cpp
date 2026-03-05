#include<iostream>
using namespace std;

void extremePrint( int array[], int size){
    int i = 0, j = size-1;
    while(i<=j){

        if( i == j){
            cout<< array[i]<< " ";
            break;
        }
        else{
            cout<< array[i]<< " ";
            i++;
            cout<< array[j]<< " ";
            j--;
        }
    }

}

int main(){
    int arr[7] = { 10, 20, 30, 40, 50, 60,70};
    int size = 7;
    extremePrint(arr, size);
    return 0;
}