#include <iostream>
#include <vector>
using namespace std;

void print( vector<vector <int>> arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}

bool search( vector<vector <int>> &arr, int target){  //By default pass by value unlike array
    int row_size = arr.size();   //ROW SIZE  
    int col_size = arr[0].size();  // COL SIZE

    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    // vector<vector <int>> arr (4, vector<int> (3,0)) ;    // row->4, col->3, value->0
    // int target;
    // cin>> target;
    // bool ans = search( arr, target);
    // cout<< ans;


    

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
    return 0;
    
}