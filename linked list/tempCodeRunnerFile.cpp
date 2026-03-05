# include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    // Constructor

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};


// Traversing

void print(Node *&head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

// Length of LL

int getLength(Node* &head){
    Node* temp = head;
    int len= 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


void insertAtHead(Node* &tail, Node* &head, int d){

    // Empty List

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        ;
        head->next = head;
        head->prev = head;
        tail = head;
    }
    else{
        Node* temp = new Node(d);
        
    
        tail -> next = temp;
        temp -> prev = tail;
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    

    }
}


// Insertion at end
void insertAtTail(Node* &head, Node* &tail, int d){

    // Empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
        tail -> next = head;
        head -> prev = tail;
    }
}


// Insertion at specific position

void insertAtPosition( Node* &tail, Node* &head, int position, int d){


    // Insertion at start
    if(position == 1){
        insertAtHead(tail, head,d);
        return;
    }



    // Traverse

    Node* temp = head;
    int cnt = 1;
    while( cnt < position-1){
        temp = temp -> next;
        cnt++;
    }


    // Insertion at tail

    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    }


    // position

    Node* nodeToInsert = new Node(d);



    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;

    temp -> next -> prev = nodeToInsert;
    
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
    
    
    


}

int main(){
    //Node* node1 = new Node(10);
    //Node* head = node1;
    //Node* tail = node1;
    //print(head);


    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(tail, head, 13);
    insertAtHead(tail, head, 15);
    // insertAtTail(head, tail, 50);
    // insertAtTail(head, tail, 70);
    // insertAtTail(head, tail, 80);
    // insertAtPosition(tail, head, 2, 77);
    // insertAtPosition(tail, head, 3, 97);
    // insertAtPosition(tail, head, 8, 90);

    cout<<  "Head is: " << head -> data << "and"<< "Tail is: " <<tail -> data << endl;


    print(head);



    cout<<getLength(head);
    
    return 0;
    

}