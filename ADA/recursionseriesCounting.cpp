# include <iostream> 
using namespace std;

void counting(int n){

    // base case compulsory
    if(n == 0)
        return ;
    cout<< n << " ";
    counting(n-1); // recursive call

 

}
void count(int n){

    // base case compulsory
    if(n == 0)
        return ;
    
    count(n-1); // recursive call

    cout<< n << " ";

}



int main(){
    
    int n;
    cin>>n;

    counting(n);
    cout<< endl;
    count(n);
    
    return 0;
}