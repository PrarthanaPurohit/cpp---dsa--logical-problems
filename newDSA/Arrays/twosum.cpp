# include <iostream> 
using namespace std;
// pair print only one pair

pair<int, int> twosum( int arr[], int n, int target){
    pair <int, int> ans = make_pair(-1,-1);
    for( int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ //avoid duplicate pairs and self pairing
            if(arr[i]+ arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;

}
void twosum2( int arr[], int n, int target){
    
    for( int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ //avoid duplicate pairs and self pairing
            if(arr[i]+ arr[j] == target){
                cout<< arr[i]<<" "<<arr[j]<< endl;
            }
        }
    }
}

int main(){
    int array[7] = {10, 20, 5, 3, 25, 0, 15};
    int size = 7;
    int target = 35;
    pair <int, int> ans = twosum( array,size, target); //initialise
   
    if( ans.first== -1 && ans.second == -1){
        cout<< "pair not found";
    }
    else{
        cout<< "pair found! "<< ans.first<< " "<< ans.second<< endl;
    }
    

    cout<< "all possible pairs"<< endl;
    twosum2(array, size, target);
    return 0;
}