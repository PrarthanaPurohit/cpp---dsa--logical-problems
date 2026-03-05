#include<iostream>
using namespace std;
int main(){

    int a= 10;
    int b= 20;

    //1 using temporary variable
    // int temp = a;
    // a = b;
    // b = temp;
    
    //2 use inbuilt swap()

    // swap(a,b);

    // 3 use +,-
    // a = a - b; // Step 1 store the difference in a
    // b = a + b; // Step 2 store value of a in b by adding b in updated a
    // a = b - a; // step 3 subtract updated value from b and store in a 


    // 4 use bitwise

    a = a ^ b; // Step 1
    b = a ^ b; // Step 2 Since a now holds a ^ b, XORing it with b restores the original value of a and stores it in b.
    a = a ^ b; // Step 3 XORing a (which holds a ^ b) with the new value of b restores the original value of b in a.




    cout << a;
    cout << b;


    
    return 0;
}