#include <iostream>
#include <vector>
using namespace std;

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

//USING NEW ARRAY
void transpose( vector< vector<int>> &arr2,int row_size, int col_size){
    vector <vector <int>> new_arr (col_size, vector<int> (row_size,0));
    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            new_arr[j][i] =arr2[i][j];
        }
    }
    print(new_arr);

}


int main(){
    // input from user
    vector<vector<int>> arr2 (3, vector<int> (2)); //initialised with zero since no value is passed
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