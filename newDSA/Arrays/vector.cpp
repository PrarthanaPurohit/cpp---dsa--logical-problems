#include <iostream>
using namespace std;
#include <vector>

void print( vector<int>& v){
    int size = v.size();
    cout<< "New Vector"<< endl;
    for(int i=0; i<size; i++){
        
        //cout<<   v[i]<< endl;
        
        cout<< v.at(i)<< " ";
    }
    cout<< endl;
}
void print_char( vector<char>& v){
    int size = v.size();
    cout<< "New Vector"<< endl;
    for(int i=0; i<size; i++){
        
        //cout<<  "Element: "<< v[i]<< endl;
        
        cout<<  "Element: "<< v.at(i)<< endl;
    }
}

// FOR EACH LOOP
void print_new(vector <int> &v){
    for( auto it:v){
        cout<< it<< " ";
    }
    cout<< endl;
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    print_new(v);
    v.clear(); //capacity still same
    cout<<v.capacity();
    v.push_back(100);
    print(v);

    vector<int> v2(5, 10); //size, values
    vector <int> v3 = {3,4,3,4,5}; 
    vector <int> v5{22,3,34,5};
    print(v2);
    print(v3);
    print(v5);
    //copy vector
    vector<int> v7(v2);
    print(v7);


    // char vector
    cout<< "\nchar vector";
    vector<char> str6{'a','b','c'};
    
    cout<< str6.front();
    cout<< str6.back();
    
    print_char(str6);
    
    
    return 0;

}