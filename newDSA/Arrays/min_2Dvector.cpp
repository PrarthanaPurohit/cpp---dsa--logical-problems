#include <iostream> 
#include <vector>
#include <limits.h>
using namespace std;


void min_value( vector<vector<int>> arr){
    int r_size = arr.size();
    int c_size = arr[0].size();
    int min_value = INT_MAX;
    for(int i=0; i<r_size; i++){
        for(int j=0; j<c_size; j++){
            if( arr[i][j] < min_value){
                min_value = arr[i][j];
            }
        }
    }
    cout<< "Minimum value: "<< min_value;
}

int main(){
    
    vector<vector<int>> arr (3, vector<int> (2));
    int row_size = arr.size();
    int col_size = arr[0].size();

    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            cin>> arr[i][j];
        }
    }

    min_value(arr);

    return 0;
}