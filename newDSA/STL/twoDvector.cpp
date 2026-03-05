#include <iostream>
#include <vector>
using namespace std;

void print(vector <vector<int>> &arr){
    for( int i=0; i< arr.size(); i++){
        for( int j=0; j< arr[i].size(); j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }

}
int main(){
    // vector<vector<int>> arr(4, vector<int> (3));
    // print(arr);

    //jagged vector: each row has variable no. of columns
    vector <vector<int>> arr2(4); //4rows
    print(arr2);

    arr2[0] = vector<int>(3,5);
    arr2[1] = vector<int>(5);
    arr2[2] = vector<int>(2,6);
    print(arr2);

    //copy ctor

    vector <vector<int>> arr3(arr2);
    print(arr3);

    vector <vector<int>> arr4;
    arr4 = arr3;
    print(arr4);



    return 0;
}