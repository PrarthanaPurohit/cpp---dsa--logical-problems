#include <iostream>
using namespace std;
#include <vector>


int main(){
    vector<int> v;
    
    int data;

    while(true){
        
        cin>> data;
        if(data == -1){
            break;
        }
        v.push_back(data);
        cout<< "capacity: "<< v.capacity()<<" "<< "size: "<< v.size()<< endl;
    }
    v.clear();
    cout<<v.capacity();
    
    
    return 0;

}