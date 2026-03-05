#include <iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    int x=1;
    
    while(i<=n){
        int j=1;
    
        while(j<=n){
            cout<<x;
            j++;
            x++;
        }
        i++;
        
        cout<<endl;
        
    }
}