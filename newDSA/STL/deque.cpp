#include <iostream> 
#include<deque>
#include <vector>
using namespace std;

// it has iterators

void print(deque <int> dq){
    deque <int> :: iterator it = dq.begin();
    while( it!= dq.end()){
        cout<< *it<< " ";
        it++;

    }
    cout << endl;
}

int main(){

    deque <int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(50);
    dq.push_front(40);
    print(dq);
    dq.pop_back();
    dq.pop_front();
    print(dq);

    cout<< dq.size()<< endl;
    cout<< dq.empty()<< endl;
    cout<< dq.front()<< endl;
    cout<< dq.back()<< endl;
    cout<< dq[0]<< endl;
    dq.at(0)= 1000;
    print(dq);

    //dq.clear();
    cout<< dq.size()<< endl;

    deque <int> dq2 = {10, 20, 30 ,40};

    print(dq);
    print(dq2);

    dq.swap(dq2);
    print(dq);
    cout<< dq.size()<< endl;
    print(dq2);

    dq.insert(dq.begin(),2000);
    dq.insert(dq.end(), 3000);
    print(dq);

    dq.erase(dq.begin());
    print(dq);
    dq.erase(dq.end());
    print(dq);

    // //dq.erase(dq.begin(), dq.end());
    // print(dq);
    // //cout<< dq.size();


    // //ctor size, value
    // deque <int> dq7(5,10);
    // print(dq7);

    // //using vector
    // vector<int> v = {1,2,3,4};
    // deque <int> dq8(v.begin(), v.end());
    // print(dq8);
    

    // // for each loop

    // for( int i: dq8){
    //     cout<< i<< " ";
    // }

    return 0;
}