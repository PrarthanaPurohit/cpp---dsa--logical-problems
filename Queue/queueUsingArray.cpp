#include <iostream>
using namespace std;
class Queue
{

    int * arr; // dynamic array
    int qfront;
    int rear;
    int size;

public:
    // Constructor
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue()
    {
        if (qfront == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1; // space free
            qfront++;

            // Space saving

            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }

            return ;
        }
    }



    int front(){
        if(qfront == rear){
            cout<<"Empty"<<endl;
        
        }
        else{

            cout<< "Front is:" << arr[qfront]<< endl;
        }


    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){

    Queue q(10);


    q.enqueue(10);
    q.enqueue(54);
    q.enqueue(76);
    q.enqueue(33);
   
    if(q.isEmpty()){
        cout<< " Empty"<< endl;
        }
    else{
        cout<< "not empty"<< endl;
    }

    q.front();
    q.dequeue();
    q.front();
    return 0;



}