#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

void print( unordered_map <string, string> table){
    unordered_map <string, string> :: iterator it = table.begin();
    while(it!=table.end()){
        pair <string, string> p = *it;
        cout<< p.first<< " : "<< p.second<< endl;
        it++;
    }
    cout<< endl;
}
void print2( unordered_map <int, string> table){
    unordered_map <int, string> :: iterator it = table.begin();
    while(it!=table.end()){
        pair <int, string> p = *it;
        cout<< p.first<< " : "<< p.second<< endl;
        it++;
    }
    cout<< endl;
}
void print3( map <int, string> table){
    map <int, string> :: iterator it = table.begin();
    while(it!=table.end()){
        pair <int, string> p = *it;
        cout<< p.first<< " : "<< p.second<< endl;
        it++;
    }
    cout<< endl;
}

int main(){

    //create unordered map
    unordered_map<string, string> table;

    //insertion
    //1
    table["in"] = "India";

    //2
    table.insert(make_pair("en", "England"));

    //3
    pair <string, string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    print(table);


    cout<< table.size()<< endl;
    cout<< table.empty()<< endl;

    //table.clear();
    cout<< table.size()<< endl;

    table.at("in")= "India2";

    cout<< table.at("in")<< endl;

    table["in"] = "India3";
    cout<< table["in"]<< endl;

    //table.erase(table.begin(), table.end());
    //cout<< table.size();

    //table.erase(table.begin());
    //cout<< table.size();
    //print(table);
    //table.erase(table.end());
   // cout<< table.size();
    print(table);

    table.erase("en");
    print(table);

    //find returns iterator position for key or end() iterator if not found
    if(table.find("in")!= table.end()){
        cout<< "key found"<< endl;}


    //count returns 1 if found; 0 if not
    cout<< table.count("in")<< endl;
    cout<< table.count("ze")<< endl;

    unordered_map<int, string> table2;
    table2[6] = "Hi";
    table2[2] = "bonjour";
    table2[5] = "namaste";
    print2(table2);


    //ordered map
    map<int, string> table3;
    table3[6] = "Hi";
    table3[2] = "bonjour";
    table3[5] = "namaste";
    print3(table3);

    

    return 0;
}