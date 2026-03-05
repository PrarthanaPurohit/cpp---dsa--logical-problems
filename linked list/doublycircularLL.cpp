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


void deleteNode( Node* &head, Node* &tail, int position){


    //deleting first node
    if(position ==1){
        Node* temp = head;
        
        head = head -> next;
        head -> prev = tail;
        tail -> next = head;
        temp -> next = NULL;
        delete temp;
    }


    else{
        // Deleting any middle node or last node
        Node* curr = head;
        Node* prevv = NULL;
        int cnt = 1;
        while( cnt < position){
            prevv = curr;
            curr = curr -> next;
            cnt++ ;
        
        }

        if(curr-> next == head){  //end
            prevv -> next = head;
            tail = head -> prev;
            head -> prev = prevv;
            
            
            curr -> next = NULL;
            delete curr;
            
        }
        else{
            prevv -> next = curr -> next;
            curr -> next -> prev = prevv;
            curr -> next = NULL;
            delete curr;}
    }
}

// Traversing

void print(Node* &head){
    Node* temp = head;
    while(temp -> next != head){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout << temp -> data;
    cout<< endl;
}

// Length of LL

int getLength(Node* &head){
    Node* temp = head;
    int len= 0;
    while(temp -> next != head){
        len++;
        temp = temp -> next;
    }

    cout<< "Length is: "<<len+1<<endl;
    return 0;
}


void insertAtHead(Node* &tail, Node* &head, int d){

    // Empty List

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        
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
        temp -> next = temp;
        temp -> prev = temp;
        tail = temp;
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        
        tail -> next = temp;
        temp -> prev = tail;
        temp -> next = head;
    
        head -> prev = temp;
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

    if(temp -> next == head){
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
    
    insertAtHead(tail, head, 18);
    
    insertAtTail(head, tail, 50);
    
    insertAtTail(head, tail, 70);
    
    //insertAtTail(head, tail, 80);

    //insertAtPosition(tail, head, 2, 77);
    
    //insertAtPosition(tail, head, 3, 97);
    // insertAtPosition(tail, head, 8, 90);

    cout<<  "Head is: " << head -> data << "and"<< "Tail is: " <<tail -> data << endl;
    print(head);
    deleteNode(head, tail,4);
    print(head);
    
    cout<<  "Head is: " << head -> data << "and"<< "Tail is: " <<tail -> data << endl;



    cout<<getLength(head);
    
    return 0;
    

}