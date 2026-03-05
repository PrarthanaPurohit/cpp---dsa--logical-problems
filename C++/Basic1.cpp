#include<iostream>
using namespace std;
int main(){
    
    cout<<"namaste"<<endl; // endl gives new line to the next upcoming code
    cout<<"Riya"<<'\n';
    cout<<"\n";
    char ch = 'v';//char stoes only one element
    cout<< "ch stores only one ele "<< ch<<endl;
    //sizeof() gives size of variable
    int size = sizeof(ch);
    cout<<size<<endl;
    cout<<sizeof(ch)<<endl;

    int a = 'a';//TYPECASTING
    cout<<a;
    char cha = 98;
    cout<<cha<<endl;
    char val = 123456;  // here val int is 4 bit but when it is changed to char only value at 1bit is displayed
    cout<<val<<endl;

    unsigned int z = 12;//only takes positive value //signed takes both = and - 
    cout<<z<<endl;

    //2's compliment for negative nos ie all 0 is converted to 1 then =1 at last digit
    
   // int/int=int, float/int = float
   cout<<2/5<<endl;
   cout<<2.0/5<<endl;

   // relational operators
   int x = 10;
   int y = 10;
   bool first = (x==y);
   cout<<first<<endl;




}
