#include <iostream>
#include <queue>
using namespace std;

void print(priority_queue <int> pq){
    while(!pq.empty()){
        cout<< pq.top()<< " ";
        pq.pop();
    }
    cout<< endl;
}

int main(){
    priority_queue <int> pq;  //max heap -> max value -> highest priority
    pq.push(10); // 10
    pq.push(20); // 20 10
    pq.push(50); // 50 20 10
    pq.push(30); // 50 30 20 10
    cout<< pq.top()<< endl;
    pq.pop();  //30 20 10
    cout<< pq.top()<< endl;
    pq.pop(); // 20 10
    cout<< pq.top()<< endl;

    cout<< pq.size()<< endl;
    cout<< pq.empty()<< endl;


    //min heap -> min value -> highest priority
    priority_queue <int, vector<int>, greater<int>> pq2; //
    pq2.push(10); // 10
    pq2.push(30); // 10 30
    pq2.push(5); // 5 10 30
    
    pq2.pop();  // 10 30
    cout<< pq2.top()<< endl;
    pq2.pop(); // 30
    cout<< pq2.top()<< endl;

    cout<< pq2.size()<< endl;
    cout<< pq2.empty()<< endl;
    cout<< "here";

    priority_queue <int> pq3;  //max heap -> max value -> highest priority
    pq3.push(10); // 10
    pq3.push(20); // 20 10
    pq3.push(50); // 50 20 10
    pq.push(30);  // 50 30 20 10

    priority_queue <int> pq4;  //max heap -> max value -> highest priority
    pq4.push(1); 
    pq4.push(2); 
    pq4.push(5);  // 5 2 1

    pq3.swap(pq4);

   print(pq3);
   print(pq4);
 


    
    return 0;
}