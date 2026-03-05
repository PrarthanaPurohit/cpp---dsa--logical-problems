#include<iostream>
using namespace std;
//2
bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

//3
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}

//4
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size - 1;i=i+2){
//         int temp = arr[i +1];                               
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}


//5 
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

//6
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}

//7
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}

int main(){
    //1
    // int n, sum = 0;
    // cin >> n;
    // int input[n];
    // for(int i=0;i<n;i++){
    //     cin >> input[i];
    // }
    // for(int i=0; i<n; i++){
    //      sum = sum + input[i];
    //  }
    // cout << sum << endl;

    //2
    // int arr[10] = {1,2,3,4,5,6,7,8,9,9};
    // int size = 10;
    // int val;
    // cin>> val;
    // bool ans =linearSearch(arr, size, val);
    // cout<< ans;
    // return 0;

    //3
    // int arr[9];
    // int size = 9;
    // populate(arr, size);

    //4
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    //swapAlternate( arr, size);


    //5
    // int x;
    // cin>> x;
    // int ans =pairSumToX(arr, size, x);
    // cout<< ans;
    
    //6
    // int x;
    // cin>> x;
    // int ans =tripletSumToX(arr, size, x);
    // cout<< ans;

    //7
    int arr2[] = {1,0,1,1,0,0,1};
    int n = 7;
    sort0sand1s(arr2, n);
    print(arr2, n);
}