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

    // Destructor

    ~Node(){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory free for node with value: "<< value<< endl;
    }
};


// deletion

void deleteNode(Node* &head, int position){

    //deleting first node
    if(position ==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{

        // deleting last node or any node

        Node* curr = head;
        Node* temp = NULL;

        int cnt = 1;

        while( cnt < position){
            temp = curr;
            curr = curr -> next;
            cnt++;
        }

        // Deleting last node
        if(curr -> next == NULL){

            curr -> prev = NULL;
            temp -> next = NULL;
            curr -> next = NULL;
            delete curr;
        }

        // Deleting mid node
        else{
            curr -> prev = NULL; 
            temp -> next = curr -> next;
            curr -> next -> prev = temp;

            curr -> next = NULL;

        
            delete curr;
        }
    }
}


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
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
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
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);
    insertAtPosition(tail, head, 2, 77);
    insertAtPosition(tail, head, 3, 97);
    insertAtPosition(tail, head, 8, 90);

    print(head);


    deleteNode(head,1);

    cout<<  "Head is: " << head -> data << "and"<< "Tail is: " <<tail -> data << endl;


    print(head);



    cout<<getLength(head);
    
    return 0;
    

}