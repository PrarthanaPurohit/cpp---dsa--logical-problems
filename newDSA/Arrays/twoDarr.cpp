#include <iostream>
#include <algorithm> 
using namespace std;


int main(){
    // int arr[3][4]= {{1,2,3,4}, {5,6,7,8}, {9,4,3,5}};
    // //int arr[2][2] = {10,20,30,40};
    // //int arr[3][2] = {10, 30}; // rest will be zero

    // int row_size = 3;
    // int col_size = 4;

    // //col wise print
    // for(int col_index = 0; col_index < col_size; col_index++){
    //     for(int row_index = 0; row_index < row_size; row_index++){
    //         cout<< arr[row_index][col_index]<<" ";
    //     }
    //     cout<< endl;
    // }

    //row wise print
    // for(int row_index = 0; row_index < row_size; row_index++){
    //     for(int col_index = 0; col_index < col_size; col_index++){
    //         cout<< arr[row_index][col_index]<<" ";
    //     }
    //     cout<< endl;
    // }

    //For diagonal 00 11 22

    // for(int i=0; i< row_size; i++){
    //     cout<< arr[i][i]<< " ";
    // }

    // For another diagonal 

    // for( int r = 0; r< row_size; r++){
    // int r=0;
    // for( int c= col_size-1; c>=0; c--){
    //         cout<< arr[r][c]<< " ";
    //         r++;
    // }

    //Take user input

    // int arr2[3][4];
    // int r_size = 3;
    // int c_size = 4;
    // int data;

    // for(int r=0; r< r_size; r++){
    //     for( int c=0; c<c_size; c++){
    //         //cin>> data;
    //         cin>>arr2[r][c];

    //     }
    // }
    // //row wise print
    // for(int row_index = 0; row_index < row_size; row_index++){
    //     for(int col_index = 0; col_index < col_size; col_index++){
    //         cout<< arr2[row_index][col_index]<<" ";
    //     }
    //     cout<< endl;
    // }

    
    
    // using fill to assign same values
    int arr3[3][3];
    int row_size = 3;
    int col_size = 3;
    //#include <algorithm>

    fill(&arr3[0][0], &arr3[0][0] + row_size * col_size, 5);
    for(int row_index = 0; row_index < row_size; row_index++){
        for(int col_index = 0; col_index < col_size; col_index++){
            cout<< arr3[row_index][col_index]<<" ";
        }
        cout<< endl;
    }



    return 0;
}