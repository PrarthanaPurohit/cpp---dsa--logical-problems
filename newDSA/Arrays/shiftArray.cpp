#include <iostream>
using namespace std;
void rotateArr(int arr[], int size, int shift){
    int finalShift = shift % size;
    if( finalShift == 0){
        return;
    }

    // copy and save last shift no. of elements in temp array
    int temp[finalShift];
    int index = 0;
    for(int i= size - finalShift; i< size; i++){
        temp[index]= arr[i];
        index++;
    }

    // Shift elements in original array starting from the end
    for( int i = size-1; i>=0; i--){
        if(i - finalShift >=0){
            arr[i] = arr[i - finalShift];}
    }

    //copy temp into original array start

    for(int i=0; i< finalShift; i++){
        arr[i]= temp[i];
    }
    
}
int main(){
    int array[6]= {10,20,30,40,50,60};
    int size = 6;
    int shift = 2;
    rotateArr(array, size, shift);

    for(int i = 0; i< size; i++){
        cout<< array[i]<< ", ";
    }
    return 0;
}