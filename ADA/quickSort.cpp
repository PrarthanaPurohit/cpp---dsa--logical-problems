# include <iostream> 
using namespace std;

int partition( int *arr, int s, int e){

    int pivot = arr[s];
    int cnt = 0;

    for( int i = 0; i <= e; i++){
        if(arr[i]< pivot){
            cnt++;
        }
    }

    // correct index of pivot
    int pivotIndex = s + cnt;

    // swap pivot to its correct position
    swap( arr[pivotIndex], arr[s]);

    // left part

    int i = s, j = e;

    while( i <= pivotIndex && j > pivotIndex){

        // first this while will run till true
        while(arr[i]<= pivot){
            i++;
        }
        // then this for j till true
        
        while( arr[j] > pivot){
            j--;
        }

        // faulty i, j will be swapped

        if(i <= pivotIndex && j > pivotIndex){
            swap( arr[i++], arr[j--]);
        }

        
    }
    return pivotIndex;

}

void quickSort( int *arr, int s, int e){

    // base case
    if(s >= e){
        return;
    }

    int p = partition( arr, s, e); // p is pivot index


    // sort left part
    quickSort(arr, s, p-1 );

    // sort right part
    quickSort( arr, p+1, e);
} 




int main(){
    int n; 
    cout<< "Enter size of array:"<< endl;
    cin>> n;

    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cout<< "Enter element of array:"<< endl;
        cin>> arr[i];
    }

    quickSort( arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        
    }

}