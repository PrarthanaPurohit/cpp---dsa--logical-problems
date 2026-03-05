#include <iostream>
using namespace std;
#include<vector>

void print(vector<int> &v){
    for(int i = 0; i< v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<< endl;
}

void insertionSort( vector<int> &v){
    int n = v.size();
    for( int i = 1; i< n; i++){
        int key = v[i];
        int j = i - 1;
        while( j>= 0 && v[j] > key){   //for desc order v[j] < key
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
 int main(){
    vector<int> v = { 10, 33, 4, 36, 100};
    insertionSort(v);
    print(v);
    return 0;
 }