#include <iostream>
using namespace std;
// col_size is must in function declaration
void search(int arr[][4], int row_size, int col_size, int target){
    //search target
     for(int r = 0; r < row_size; r++){
        for(int c = 0; c < col_size; c++){
            if( arr[r][c]== target){
                cout<< "found at:"<< r<< " ,"<< c;
                
            }
        }
        
    }
}
int main(){
    int arr[3][4]= {{1,2,3,4}, {5,6,7,8}, {9,4,3,5}};

    int row_size = 3;
    int col_size = 4;

    int target;
    cin>> target;
    search(arr, row_size, col_size, target);

    


    return 0;
}