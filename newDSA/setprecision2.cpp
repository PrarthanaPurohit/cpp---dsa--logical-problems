# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    // double age = 20.546346;
    // cout<< fixed<< setprecision(3) << age;
    // return 0;
    int i = 10;
    { int i = 20;
      cout<<i<< endl;
    }

    cout<< i;
}