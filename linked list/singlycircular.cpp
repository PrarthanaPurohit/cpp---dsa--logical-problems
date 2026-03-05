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


void deleteNode( Node* &head, Node* &tail, int position){


    //deleting first node
    if(position ==1){
        Node* temp = head;
        
        head = head -> next;
        tail -> next = head;
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

        if(curr-> next == head){
            prev -> next = head;
            
            tail = prev;
            curr -> next = NULL;
            delete curr;
            
        }
        else{
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;}
    }
}




//Function to insert a new node at begining

void insertAtHead(Node* &head, Node* &tail, int d){   //Referencing head, data value

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(d);  //Creating a new node 'temp' 
    
        temp -> next = head;      // pointing head
    
        head = temp;   
        tail -> next = head;  }         // temp is now new Head hence temp is inserted at begining
}
//Function to insert a new node at end

void insertAtTail(Node* &tail, Node* &head, int d){   //Referencing head, data value
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    
    else{
        Node* temp = new Node(d);  //Creating a new node 'temp' 
        tail -> next = temp;      // pointing at newly added element
    
        tail = temp;              // tail is now newly added element at end hence temp is inserted at end
        tail -> next = head;}
}



void insertAtPosition( Node * &tail, Node* &head, int position, int d){

    Node* temp = head;     // Creating a node temp for traversing
    int cnt = 1;     // count for while loop

    if(position == 1){
        insertAtHead(head,tail, d);
        return ;
    }

    while( cnt< position-1){          // insert after  node temp ( at n-1) and before node temp -> next ( at n)
        temp = temp->next;            // shifting temp to next next
        cnt++;
    }

    if(temp->next == head){
        insertAtTail(tail, head, d);
        return;
    }
    else{
        Node* nodeToInsert = new Node(d);     // creating new node

        nodeToInsert -> next =  temp -> next;     // new node's next will point to node 'temp-> next'
        temp -> next = nodeToInsert;   }            // temp's node -> next will point to new node
}

// Traversing

void print(Node* head){    //Function to traverse

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;      // temp is new node for traversing, we set head as temp

    }while(temp != head) ;    // temp moves till end
    cout<< endl;    
}


int main()
{

    //Node *node1 = new Node(10); // creating first object using above constructor; data = 10; next = NULL
    // Object name is node1 and it is a pointer containing data value and address to next node which in this case is NULL
    

    Node* head = NULL; // Created a node "head"  and node1 is our head
    Node* tail = NULL;


    // Function call to insert at begining
    insertAtHead(head, tail,  12);


    insertAtHead(head, tail, 15);

    cout<< " Linked List: "<<endl;
    // print(head);


    insertAtTail( tail, head, 77);
    print(head);





    int pos, ele;
    cout<<" Enter the position at which new element must be added: "<< endl;
    cin>> pos;

    cout<<" Enter the element to be added: "<< endl;
    cin>> ele;


     insertAtPosition( tail, head, pos, ele);
     cout<< "After Insertion at position: "<< endl ;
     print(head);
    
    cout<< "head: "<< head-> data<< endl;
    cout<< "tail: "<< tail-> data<<endl;

    deleteNode(head, tail,3);
    print(head);

    cout<< "head: "<< head-> data<< endl;
    cout<< "tail: "<< tail-> data<<endl;
    return 0;
}