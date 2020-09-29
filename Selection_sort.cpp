#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
  
void selectionSort(int arr[], int n) 
{
    int i, j, min_ele;
  
    for (i = 0; i < n-1; i++) 
    { 
        min_ele = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_ele]) 
            min_ele = j; 
  
        swap(&arr[min_ele], &arr[i]); 
    } 
}
  
int main() 
{
    int arr[1000];
    int n = sizeof(arr); 
    for(int i=0;i<n;i++)
    arr[n-i]=i;
    
    selectionSort(arr, n); 
    return 0; 
} 
