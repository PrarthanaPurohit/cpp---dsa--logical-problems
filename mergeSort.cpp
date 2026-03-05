#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // copy values

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }

    // merge 2 arrays while sorting
    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[k++] = arr1[index1++];
        }

        else
        {
            arr[k++] = arr2[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = arr1[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = arr2[index2++];
    }

    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int *arr, int s, int e){
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
    
}

int main(){
    
    int arr[5] = {10, 2, 33, 33, 4};
    int n = 5;
    
    mergeSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        
    }
}