
#include <stdio.h> 

void insertionSort(int arr[], int n) 
{
    int i, temp, j; 
    for (i = 1; i < n; i++) { 
        temp = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > temp) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = temp; 
    }
}//
  
int main() 
{
    int arr[10000]; 
    
    int n = sizeof(arr); 
    for(int i=10000;i>=0;i++)
    arr[n-i]=i;
    
  
    insertionSort(arr, n); 
  
    return 0; 
}
