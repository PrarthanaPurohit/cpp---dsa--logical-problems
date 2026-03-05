#include <iostream>
#include<queue>
#include<deque>
#include<vector>
#include <list>
using namespace std;

void print(queue <int> q){
    while(!q.empty()){
        cout<< q.front()<< " ";
        q.pop();
    }
    cout<< endl;
}

int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<< q.size()<< endl;
    print(q);

    //copy
    queue <int> q_copy1(q);
    print(q_copy1);

    queue <int> q_copy2;
    q_copy2 = q;
    print(q_copy2);
    q.pop();
    print(q);
    cout<<q.size()<< endl;
    cout<< q.front()<< endl;
    cout<< q.back()<< endl;
    cout<< q.empty()<< endl;
    cout<<"here";

    print(q);

    queue <int> q2;
    q2.push(100);
    q2.push(200);
    q2.push(300);
    q2.push(400);
    print(q2);

    q.swap(q2);

    print(q);
    print(q2);


    //only supports list, deque
    //initialisation

  
    
    //using deque

    deque <int> d = {1,2,3,4};
    queue <int> q3(d);
    print(q3);

    //using list

    list <int> l1 = {1,2,34};
    queue <int, list<int>> q6(l1); // can't use print 
    cout<< q6.front()<< endl;


    

    // indirectly using vector
    vector <int> v3 = {10,20,30};
    deque <int> d2(v3.begin(), v3.end());
    queue <int> q4(d2);
    print(q4);






    return 0;
}