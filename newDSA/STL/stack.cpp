#include <stack>
#include<vector>
#include<list>
#include<deque>
#include <iostream>
using namespace std;

void print(stack <int> st){
    while(!st.empty()){
        cout<< st.top()<< endl;
        st.pop();

    }
    cout<< endl;
}
void print2(stack <int, list<int>> st){
    while(!st.empty()){
        cout<< st.top()<< endl;
        st.pop();

    }
    cout<< endl;
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    print(s);
    stack <int> s_copy(s);
    print(s_copy);

    stack <int> s_copy2;
    s_copy2 = s;
    print(s_copy);
    s.pop();
    print(s);
    cout<<s.size()<< endl;
    cout<< s.top()<< endl;
    cout<< s.empty()<< endl;


    // implementation through vector
    vector <int> v = {1,2,3};
    deque <int> d(v.begin(), v.end());
    stack <int> s2(d);
    print(s2);

    //implementation using list
    list<int> l1={1,2,3};
    stack <int, list<int>> s3(l1);
    print2(s3);

    //implementation using deque
    deque <int> d2 = {1,2,3};
    stack <int> s4(d2);
    print(s4);  
    
    deque <int> d3 = {10,20,30,40};
    stack <int> s5(d3);
    print(s5);

    s5.swap(s4);

    print(s4);
    print(s5);


    }

    
