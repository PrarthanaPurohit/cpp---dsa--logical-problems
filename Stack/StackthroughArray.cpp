# include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;   //Dynamic array
    int top;
    int size;


    //Constructor
    Stack(int size){
        this -> size = size;
        arr = new int[size];   // making array
        top = -1;
    }

    // Function to add new element
    void push(int element){
        if(size - top >1){   // top < size - 1     #top starts from zero and size from 1
            top++;
            arr[top]=element;

        }

        else{
            cout<<"Stack Overflow"<<endl;
        }
    }


    // Function to delete top element
    void pop(){
        if(top>-1){  // Stack not empty
            top--;
        }
        else{
            cout<< "Stack is empty"<< endl;
        }
    }


    // Function to print top element
    int peek(){
        if(top>-1)
            cout<< arr[top] << endl;
        
        else{
            cout<< "Stack is empty"<< endl;
            return -1;
        }
    }

    // to check if empty or not

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }

};


int main(){

    Stack st(5);   // Here we created object of class

    st.push(22);
    // st.push(44);
    // st.push(66);
    st.pop();
    st.peek();

    if(st.isEmpty()){
        cout<<" Stack is empty "<<endl;
    }
    else{
        cout<< " Stack is not empty "<< endl;
    }

    return 0;
}