#include <iostream>
using namespace std;
#include <vector>

// TC O( log(m*n)) so used binary search
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        
        int left = 0; int right = row_size * col_size -1;
        while(left <= right){
          int mid = left + (right-left)/2; //limits
          int mid_value = matrix[mid/ col_size][mid % col_size]; // don't know
          if( mid_value == target) return true; // mid_value is required, can't write matrix[mid] coz its 2D
          else if( mid_value < target){
            left = mid+1;
          }
          else{
            right = mid-1;
          }}
        return false;}


int main(){
    vector<vector<int>> matrix (3, vector<int> (2));
    int row_size = matrix.size();
    int col_size = matrix[0].size();

    for( int i=0; i<row_size; i++){
        for( int j=0; j< col_size; j++){
            cin>> matrix[i][j];
        }
    }
    int target;
    cin>> target;
    bool ans = searchMatrix(matrix, target);
    cout<< ans;


}