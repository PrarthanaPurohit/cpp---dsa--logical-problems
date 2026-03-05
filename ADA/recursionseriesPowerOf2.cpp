# include <iostream> 
using namespace std;

int power(int n){

    // base case compulsory
    if(n == 0)
        return 1;
    
    return 2 * power(n-1); // recursive call

     // return is compulsory

}



int main(){
    
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans;
    return 0;
}