#include <math.h> 
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
}
  
int main() 
{
    int arr[10000]; 
    for(int i=0;i<10000;i++)
    arr[i]=i;
    int n = sizeof(arr); 
  
    insertionSort(arr, n); 
  
    return 0; 
}
