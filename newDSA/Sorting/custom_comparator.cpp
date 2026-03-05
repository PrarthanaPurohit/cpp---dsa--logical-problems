#include <iostream> 
#include<vector>
#include<algorithm>
using namespace std;

void print( vector<vector<int>> &v){
    for( int i=0; i<v.size(); i++){
        vector<int> temp = v[i];
        cout<< temp[0]<< " "<< temp[1]<< endl;
    }
    cout<< endl;
}


// custom comparator return type always bool
bool mycomp( vector<int> &a, vector<int> &b){
    //return a[1]<b[1]; //sort by 1st index in increasing order

    //for decreasing order
    return a[1] > b[1];

    // return a[0]<b[0] //default of stl sort
}
int main(){

    vector<vector<int>> v;

    // size of v
    int n;
    cout<< "enter size:";
    cin>> n;

    for(int i = 0; i < n; i++){
        int a, b; 
        cin>> a>>b;
        vector<int> temp; // temporarry vector to store [ ]
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    
    sort(v.begin(), v.end(), mycomp);
    cout<< "After sort"<< endl;
    print(v);
    return 0;
}