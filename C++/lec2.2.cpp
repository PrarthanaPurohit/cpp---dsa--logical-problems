#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<< " Enter value"<<endl;
    cin>>n;
   
   
    if(n>0){
        cout<<"n is positive"<<endl;
    
    }

    /*
    else 
    {
        if(n,0){
            cout<<"n is negative";
        }
        else
        {
            cout<<" n is zero";
        }
    }
    */

   else if(n<0){
    cout<<"n is negative";
   }

   else
   {
    cout<<" n is zero";
   }

}

