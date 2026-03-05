#include <iostream>
using namespace std;
#include <cmath>
int main(){

    // divide the no. by 2 till > 0
    // take remainders in reverse order
    int n;
    cin>> n;
    int ans = 0; //Assign some value to ans to put in equation
    int i = 0;
    int remainder;

    while(n > 0){
      remainder = n % 2;
      
      ans = remainder * pow(10,i) + ans ;  //to correct reverse order
      i++;
      n = n / 2;
    }

    cout<< "BInary no: "<< ans<< endl;

    while(n > 0){
      int bit = (n & 1);  // to obtain last bit
      
      ans = bit * pow(10,i) + ans ; 
      i++;
      n = n>>1;  // right shift eg if n was 1010 then now 101
    }

    cout<< "BInary no: "<< ans;
    return 0;

}