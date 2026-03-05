#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
void print( set <int> st){
    set <int> :: iterator it = st.begin();
    while(it!=st.end()){
        cout<< *it<< " ";
        it++;
    }
    cout<< endl;
}
int main(){
    set <int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);
    print(st);

    cout<< st.size()<< endl;
    //st.clear();
    cout<< st.empty()<< endl;

    //st.erase(st.begin());
    print(st);

    //st.erase(st.end());  //prints something incorrect
    print(st);

    //st.erase(st.begin(), st.end());
    print(st);

    //st.erase(15);
    print(st);

    if(st.find(10)!= st.end()){  //it returns an it pointing to value if present, else end()it
        cout<< "found";
    }

    if(st.count(10)==1){  //  returns 1 if present, 0 if not
        cout<< "present";
    }
    return 0;
}