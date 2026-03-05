# include <iostream> 
using namespace std;
void triplets( int arr[], int n, int target){
    
    for( int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ 
            for( int k=j+1; k<n; k++){
                cout<< "("<< arr[i]<<","<< arr[j]<<","<< arr[k]<<")";
                if(k!=n-1){
                    cout<<" , ";
                }
            }

            if(j!=n-1){
                cout<<","<< endl;
            }  
         }

         if( i!=n-1){
            cout<<","<<endl;
         }
    }
 }


int main(){
    int array[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 0;
    triplets(array, size, target);
    return 0;
}