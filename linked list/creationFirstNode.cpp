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

int main()
{

    Node *node1 = new Node(10); // creating first object using above constructor; data = 10; next = NULL
    // Object name is node1 and it is a pointer containing data value and address to next node which in this case is NULL

    cout<< node1->data<<endl;    //to print data of node1
    cout<<node1->next<<endl;     // to print address of next node


   return 0;
}