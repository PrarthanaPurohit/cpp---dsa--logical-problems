#include <iostream>
using namespace std;

int getlength( char arr[], int size){
    int count = 0;
    int i = 0;
    while( arr[i] != '\0'){
        count++; i++;
    }
    return count;

}
int main(){
    char arr[100];
    cin>>arr; //can directly take input of full spellings eg Riya 
    cout<< arr;   //last char is null

    // space, tab, enter is delimeter

    //how to take input with spaces
    char arr3[100];
    //n.getline(arr3, 100);
    //ut<< arr3;

    // how to set your own delimeter
    // char arr2[10];
    // cin.getline(arr2, 100, '\t');  //if you enter tab it will stop taking input
    // cout<< arr2;


    //print ascii values
    // cout<< (int)arr[0]<<endl;
    // cout<< (int)arr[1]<<endl;
    // cout<< (int)arr[2]<<endl;
    // cout<< (int)arr[4]; //ascii value of null is zero

    int ans = getlength(arr, 100);
    cout<< ans;
    

    return 0;
}