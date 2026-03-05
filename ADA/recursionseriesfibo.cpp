# include <iostream> 
using namespace std;

// Gives value of fibonacci's nth element

int fib(int n){

    // base case
    if(n == 0)
       return 0;
    if(n == 1)
       return 1;

    int ans = fib( n - 1) + fib(n - 2);
    return ans;

}



int main(){
    
    int n;
    cin>>n;

    cout<< fib(n);
    
    return 0;
}