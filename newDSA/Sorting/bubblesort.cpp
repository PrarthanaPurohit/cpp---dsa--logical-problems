#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    // For n-1 iterations its going to take to sort n elements
    for (int i = 0; i < n-1 ; i++)
    {
        
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                
               
            }
           
        }
    }
}
void descbubbleSort(int arr[], int n)
{

    // For n-1 iterations its going to take to sort n elements
    for (int i = 0; i < n-1 ; i++)
    {
        
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                
               
            }
           
        }
    }
}

int main()
{
    int arr[5] = {100, 1, 6, 200, 5000 };
    int size = 5;
    descbubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}