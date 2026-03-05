# include <iostream> 
using namespace std;

void sayDigit(int n, string arr[]){
    // Base case
    if(n == 0)
       return;

    // processing 

    int digit = n % 10;

    // Traverse backwards
    n = n/10;

    sayDigit(n, arr); // n is updating above

    cout << arr[digit]<< " ";

}

int main(){

    string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    sayDigit(n, arr);
}