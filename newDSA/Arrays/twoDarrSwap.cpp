#include <iostream>
#include <vector>
using namespace std;

//SWAPPING ONLY WORKS FOR SQUARE MATRIX

void print( vector<vector <int>> &arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}

//USING SWAPPING
void transpose( vector< vector<int>> &arr2,int row_size, int col_size){
    int col=0;
     for( int i=0; i<row_size; i++){
        for( int j=i; j< col_size; j++){
            swap(arr2[i][j], arr2[j][i]);
        }
    }
    print(arr2);

}


int main(){
    // input from user
    vector<vector<int>> arr2 (3, vector<int> (3)); //initialised with zero since no value is passed
    int row_size = arr2.size();
    int col_size = arr2[0].size();

    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            cin>> arr2[i][j];
        }
    }

    print(arr2);

    cout<< endl;

    transpose(arr2, row_size, col_size);
    
   
    return 0;
    
}