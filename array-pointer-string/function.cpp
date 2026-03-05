# include <iostream>
using namespace std;
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int c,d;
    cin>>c;
    cin>>d;
    cout<<add(c,d);
    return 0;
}