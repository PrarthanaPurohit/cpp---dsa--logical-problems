# include <iostream> 
using namespace std;

int factorial(int n){

    // base case compulsory
    if(n == 0)
        return 1;
    
    return n * factorial(n-1); // recursive call

     // return is compulsory

}



int main(){
    
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans;
    return 0;
}