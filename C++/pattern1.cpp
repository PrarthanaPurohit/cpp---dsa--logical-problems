#include <iostream>
using namespace std;
int main(){
    //relate rows with col
    //row=col
    //row loop -> col loop
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;

    }
}