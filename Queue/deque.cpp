#include <iostream>
using namespace std;

class Deque{
    int * arr;
    int front;
    int rear;
    int size;


    // Constructor
 public:
    Deque(int s){
        size = s;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool pushFront(int data){
        // case1 whether full
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))){
            cout<< "Queue is full"<< endl;
            return false;

        }

        // case2 first element to push
        else if(front == -1){
            front = rear = 0;
        }

        // case3 front is zero and rear is not at end
        // send front to back to make cycle
        else if(front == 0 && rear!= (size-1)){
            front = size - 1;
        }



        // normal flow
        else{
            front--;
        }

        arr[rear]= data;
        return true;
    } 





    bool pushBack(int data){
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


    int popFront(){
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


    int popBack(){
        //case1 empty
        if(front == -1){
            cout<< "Queue is empty"<<endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1; //Delete ele


        //case2 single element is present ie f = r= 0
        if(front == rear){
            front = rear = -1;
        }
        
        // rear is at start
        // send rear back to make cycle
        else if( rear == 0){
            rear = size - 1;
        }

        //Normal case
        else{
            rear--;
        }
        return ans;


    }  


    int getFront(){
        if(isEmpty()){
            return -1;
        }
        cout<< arr[front] << endl;
    } 
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        cout<<  arr[rear]<< endl;
    } 

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    
    }


    int isFull(){
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1) % (size-1))){
            return true;
        }
        else{
            return false;
        }
    } 



};


int main(){


    Deque d(13);
    d.pushFront(23);
    d.pushBack(89);
    d.getFront();
    d.getRear();
    d.popFront();
    //d.popBack();
    //d.getFront();
    if(d.isEmpty()){
        cout<< "empty"<< endl;
    }
    else{
        cout<< "not empty"<< endl;
    }
    d.isFull();
    return 0;
}