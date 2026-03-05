#include <iostream>
using namespace std;
int main(){
    /*int n;
    cout<<"Enter times to be repeated"<<endl;
    cin>>n;
    int i =1;
    while(i<=n){
        cout<<"Riya"<<endl;
        i++;


    }*/

    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while (i<=n){
        if(i%2==0){
            sum = sum + i;

        }
        i++;

        
    }
    cout<<"sum is "<<sum;
}
