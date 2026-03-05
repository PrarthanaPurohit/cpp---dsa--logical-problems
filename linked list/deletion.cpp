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

    //Destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};



//Function to insert a new node at begining

void insertAtHead(Node* &head, int d){   //Referencing head, data value
    
    Node* temp = new Node(d);  //Creating a new node 'temp' 
    
    temp -> next = head;      // pointing head
    
    head = temp;              // temp is now new Head hence temp is inserted at begining
}


//Function to insert a new node at end

void insertAtTail(Node* &tail, int d){   //Referencing head, data value
    
    Node* temp = new Node(d);  //Creating a new node 'temp' 
    
    tail -> next = temp;      // pointing at newly added element
    
    tail = tail -> next;              // tail is now newly added element at end hence temp is inserted at end
}
 

void insertAtPosition( Node* &tail, Node* &head, int position, int d){

    Node* temp = head;    // Creating a node temp for traversing
    int cnt = 1;     // count for while loop

    // inserting at head
    if(position ==1){
        insertAtHead(head, d);
        return;

    }

    while( cnt< position-1){          // insert after  node temp ( at n-1) and before node temp -> next ( at n)
        temp = temp->next;            // shifting temp to next next
        cnt++;
    }
     // inserting at tail

    if(temp-> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);     // creating new node

    nodeToInsert -> next =  temp -> next;     // new node's next will point to node 'temp-> next'
    temp -> next = nodeToInsert;               // temp's node -> next will point to new node
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


void deleteNode( Node* &head, int position){


    //deleting first node
    if(position ==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        // Deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while( cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++ ;
        
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{

    Node *node1 = new Node(10); // creating first object using above constructor; data = 10; next = NULL
    // Object name is node1 and it is a pointer containing data value and address to next node which in this case is NULL
    

    Node* head = node1; // Created a node "head"  and node1 is our head
    Node* tail = node1;


    // Function call to insert at begining
     insertAtHead(head, 12);


    insertAtHead(head, 15);

    //cout<< " Linked List: "<<endl;
    //print(head);

    cout<< "After Insertion at position 2: "<< endl ;


    // Function call to insert at position2
    insertAtPosition(tail, head, 2, 55);
    print(head);

    deleteNode(head, 1);
    cout<<"After deletion:"<<endl;
    print(head);

   return 0;
}