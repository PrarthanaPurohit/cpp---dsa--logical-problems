#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};


class myStack{
    Node* head;
    int stacksize;
    public:


    myStack(){
        head = NULL;
        stacksize = 0;
    }




    void push(int element){
        Node* temp = new Node();
        temp -> val = element;
        temp -> next = head;
        head = temp;
        stacksize++;
    }


    void pop(){
        if(head == NULL){
            cout<< "Stack is empty"<< endl;
            return;
        }

        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
        stacksize--;
    }


    int top(){
        if(head == NULL){
            cout<< "Stack is empty"<< endl;
            return -1;
        }

        cout<< "Top element is:"<< head -> val << endl;
        return head -> val;
    }


    int size(){
        cout<< "Size of stack is:"<< stacksize<< endl;
        return stacksize;
    }

    int empty(){
        if(head == NULL){
            cout<< "stack is empty"<< endl;
            return 1;
        }
        else{
            cout<< "stack is not empty"<< endl;
            return 0;
        }
    }

};

int main(){

    myStack s1;
    //s1.empty();
    // s1.push(10);
    // s1.push(20);
    s1.top();
    //s1.size();
    // s1.push(24);
    // s1.pop();
    // s1.top();
    // s1.size();
    // s1.empty();
}