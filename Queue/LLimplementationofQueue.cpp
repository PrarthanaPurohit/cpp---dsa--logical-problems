# include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


class myQueue{
    Node* front;
    Node* rear;
    int stacksize;
    public:

    //constructor
    myQueue(){
        front = NULL;
        rear = NULL;
        
    }


    bool isEmpty(){
        if(front == NULL && rear == NULL){
            return true;
        }
        else{
            return false;
        }
    }


    void enqueue(int d){
        Node* temp = new Node();
        temp -> data = d;
        temp -> next = NULL;

        if( front == NULL){
            front = temp;
            rear = temp;
        }

        else{
            rear -> next = temp;
            rear = temp;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<< "Queue is empty"<<endl;
            
        }
        else if(front == rear){
            free(front);
            front = rear = NULL;
        }
        else{
            Node* temp = front;
            front = front -> next;
            free(temp);
        }
    }

        int getFront(){
            cout<< front -> data << endl;
        }

        int getrear(){
            cout<< rear -> data << endl;
        }
    
};
int main(){
    myQueue q1;
    q1.enqueue(10);
    q1.enqueue(11);
    q1.enqueue(15);
    q1.enqueue(16);
    q1.getFront();
    q1.getrear();
    q1.dequeue();
    q1.getFront();
    
}







