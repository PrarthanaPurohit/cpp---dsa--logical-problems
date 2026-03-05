#include <iostream>
#include <list>
using namespace std;

//print
void print(list<int> &myList){
    list <int> :: iterator it = myList.begin();  //iterator it pointing at beginning of list
    while(it!= myList.end()){
        cout<< *it<<" ";
        it++;
    }
    cout<< endl;
}

int main(){

    list <int> list5(5,9);
    print(list5);

    list <int> list1;
    list1.push_back(5);
    print(list1);
    list1.push_back(10);
    print(list1);
    list1.push_front(20);
    print(list1);
    cout<< "size is:"<<list1.size()<< endl;
    list1.pop_back();
    print(list1);
    list1.pop_front();
    print(list1);
    cout<< list1.empty()<< endl;

    list1.push_back(100);
    cout<< list1.front()<< endl;
    cout<< list1.back()<< endl;
    print(list1);

    list1.insert(list1.begin(), 50);
    print(list1);
    list1.insert(list1.end(),1000);
    print(list1);

    //list1.erase(list1.begin());
    //print(list1);
    //list1.erase(list1.end());
    //print(list1);

    //list1.erase(list1.begin(), list1.end());
    print(list1);
    cout<<list1.size();

    list1.clear();
    print(list1);
    cout<<list1.size()<< endl;

    list <int> list2;
    list2.push_back(10);
    list2.push_back(20);
    list2.push_back(30);
    list2.push_back(10);
    print(list2);

    list2.remove(10);
    print(list2);

    list <int> list3;
    list3.push_back(10);
    list3.push_back(20);
    list3.push_back(30);
    print(list3);
    list <int> list4;
    list4.push_back(100);
    list4.push_back(200);
    list4.push_back(300);
    list4.push_back(400);

    print(list4);

    list3.swap(list4);
    print(list3);
    print(list4);

    list <int> l1 = {999, 99, 89, 79};
    for(int i: l1) cout<< i<< " ";  //for each loop


    //copy 

    list <int> l2(l1);//copy ctor

    list <int> l3;
    l3 = l2;  //using = op

    print(l2);
    print(l3);




    
    return 0;
}