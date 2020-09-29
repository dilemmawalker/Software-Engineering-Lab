#include<stdio.h>
void swap(int *a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void code(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
int main(){
	int arr[1000];
		int n=sizeof(arr);
	for(int i=0;i<1000;i++)
	arr[n-i]=i;
	

	code(arr,n);
	return 0;
}
