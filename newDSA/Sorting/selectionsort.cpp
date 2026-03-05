#include<iostream>
using namespace std;
#include <vector>

void selectionSort( vector<int> &v){

    int n = v.size();
    int min_index = -1;

    //for no. of iterations ie n-1 in total
    for(int i = 0; i < n-1; i++){
        // Find min ele
        min_index = i; //let
        // comparisons for v[i] with v[i++] 
        for(int j = i + 1; j< n; j++){
            if( v[min_index] > v[j]){    // < for sorting in decreasing order
                min_index = j;
                
            }
          
        }

        swap( v[i], v[min_index]);
    }

}




int main(){

    vector<int> v = {10, 5, 30, 2, 1};
    int size = 5;

    selectionSort(v);

    for( int i=0; i< size; i++){
        cout<< v[i]<< " ";
    }

    return 0;
}