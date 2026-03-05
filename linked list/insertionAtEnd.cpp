# include <iostream>
using namespace std;

class Node
{
public:
    int data; // class named Node with two variables 1) int data 2) pointer named Next
    Node *next;

    Node(int data)  // this is a constructor with the same name as class to initialise object
    { 

        this->data = data;
        this->next = NULL;
    }
};



//Function to insert a new node at end

void insertAtTail(Node* &tail, int d){   //Referencing head, data value
    
    Node* temp = new Node(d);  //Creating a new node 'temp' 
    
    tail -> next = temp;      // pointing at newly added element
    
    tail = tail -> next;              // tail is now newly added element at end hence temp is inserted at end
}




// Traversing

void print(Node* head){    //Function to traverse

    Node* temp = head;      // temp is new node for traversing, we set head as temp

    while(temp!=NULL){        // temp moves till end
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main()
{

    Node *node1 = new Node(10); // creating first object using above constructor; data = 10; next = NULL
    // Object name is node1 and it is a pointer containing data value and address to next node which in this case is NULL
    
    Node* head = node1;
    Node* tail = node1; // Created a node "tail"  and node1 is our tail



    //Function call to print LL
    print(head);

    // Function call to insert at end
     insertAtTail(tail, 12);

    // Function call to print new LL

    cout<<" LL after insertion at end "<< endl;
    print(head);


    insertAtTail(tail, 15);
    print(head);

   return 0;
}