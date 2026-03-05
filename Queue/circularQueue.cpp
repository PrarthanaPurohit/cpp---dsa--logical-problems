#include <iostream>
using namespace std;

class Queue{
    int * arr;
    int front;
    int rear;
    int size;


    // Constructor
 public:
    Queue(int size){
        this -> size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }


    bool enqueue(int data){
        // case1 whether full
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))){
            cout<< "Queue is full"<< endl;
            return false;

        }

        // case2 first element to push
        else if(front == -1){
            front = rear = 0;
        }

        // case3 front is in mid and rear is at end
        // put rear to 0 to make cycle
        else if(( rear = size -1) && front != 0){
            rear = 0;
        }



        // normal flow
        else{
            rear++;
        }

        arr[rear]= data;
    } 


    int dequeue(){
        //case1 empty
        if(front == -1){
            cout<< "Queue is empty"<<endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1; //Delete element marked by front


        //case2 single element is present ie f = r= 0
        if(front == rear){
            front = rear = -1;
        }
        
        // front is at end
        else if( front == size-1){
            front = 0;
        }

        //Normal case
        else{
            front++;
        }
        return ans;


    }   

};


int main(){

    Queue q(11);
    q.enqueue(99);
    q.enqueue(59);
    q.enqueue(54);
    q.enqueue(4);
    q.dequeue();
    return 0;

}