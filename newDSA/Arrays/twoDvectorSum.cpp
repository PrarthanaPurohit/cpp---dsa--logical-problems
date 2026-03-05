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


void sum_row_wise( vector<vector<int>> arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    
    
    for(int r=0; r< row_size; r++){
        int sum = 0;
        for(int c = 0; c< col_size; c++){
         sum = sum + arr[r][c];}
        cout<< sum<< endl;
        
        
    }
}

void sum_col_wise( vector<vector<int>> arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    
    
    for(int c=0; c< col_size; c++){
        int sum = 0;
        for(int r = 0; r< row_size; r++){
          sum = sum + arr[r][c];}
        cout<< sum<< endl;
        
        
    }
}
void sum_diag_wise( vector<vector<int>> arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    int sum = 0;
    //if I use a single loop then for the last row there is no arr[3][3] element for non square matrix so sum will be incorrect
    for(int r=0; r< row_size; r++){
        
        for(int c = 0; c< col_size; c++){
            if( r==c){
                sum = sum + arr[r][c];
                }
        }
        
    }
    cout<< sum<< endl;
}

void sum_diag_wise2( vector<vector<int>> arr){
    int row_size = arr.size();
    int col_size = arr[0].size();
    int sum = 0;
    int row = 0;
    for(int c = col_size - 1; c>=0; c--){
            
            sum = sum + arr[row][c];
            row++;
                
    }
    
    cout<< sum<< endl;
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
    cout<< "Sum is: ";
    sum_col_wise(arr2);
    return 0;
    
}