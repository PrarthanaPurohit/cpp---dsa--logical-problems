#include <iostream>
using namespace std;

#include <queue>


int main(){

    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(90);
    cout<< "Size of queue is"<<q.size()<<endl;
    q.pop();
    cout<< "front of queue is:"<<q.front()<< endl;
    cout<< "Size of queue is"<<q.size()<<endl;
    if(q.empty()){
        cout<< "Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    if(q.empty()){
        return true;
    }

    return 0;
}