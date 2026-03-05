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



//Function to insert a new node at begining

void insertAtHead(Node* &head, int d){   //Referencing head, data value
    
    Node* temp = new Node(d);  //Creating a new node 'temp' 
    
    temp -> next = head;      // pointing head
    
    head = temp;              // temp is now new Head hence temp is inserted at begining
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
    
    cout<<" Data of fisrt node "<< endl;
    cout<< node1->data<<endl;    //to print data of node1


    cout<<" Address of second node which doesn't exist yet "<< endl; 
    
    cout<<node1->next<<endl;     // to print address of next node

    Node* head = node1; // Created a node "head"  and node1 is our head
    

    cout<<" LL with just one element "<< endl;


    //Function call to print LL
    print(head);

    // Function call to insert at begining
     insertAtHead(head, 12);

    // Function call to print new LL

    cout<<" LL after insertion at begining "<< endl;
    print(head);


    insertAtHead(head, 15);
    print(head);

   return 0;
}