#include <stdio.h> 
#include <limits.h> 
int sum(int freq[], int i, int j); 

int optimalSearchTree(int keys[], int freq[], int n) 
{
    int cost[n][n]; 
    int root[n][n]; 
    for (int i = 0; i < n; i++) 
        cost[i][i] = freq[i]; 
    for (int L=2; L<=n; L++) 
    {
        for (int i=0; i<=n-L+1; i++) 
        { 
            int j = i+L-1; 
            cost[i][j] = INT_MAX; 
            
            for (int r=i; r<=j; r++) 
            { 
               int c = ((r > i)? cost[i][r-1]:0) +  
                       ((r < j)? cost[r+1][j]:0) +  
                       sum(freq, i, j); 
               if (c < cost[i][j]) {
			   
                  cost[i][j] = c; 
                  root[i][j]=i;
              }
            } 
        } 
    }
    printf(" dp: ");
    printf("\n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d ",cost[i][j]);
		}
		printf("\n");
	}
	printf(" root: ");
	printf("\n");
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d ",root[i][j]);
		}
		printf("\n");
	}
	
	printf("root: %d",root[0][n-1]);
	printf("\n");
    return cost[0][n-1]; 
}

int sum(int freq[], int i, int j) 
{
    int s = 0; 
    for (int k = i; k <=j; k++) 
       s += freq[k]; 
    return s; 
}
int main() 
{
    int keys[] = {0,1,2,3,4,5,6,7}; 
    int freq[] = {0,4,6,8,2,10,12,14}; 
    int n = sizeof(keys)/sizeof(keys[0]); 
    printf("Cost of Optimal BST is %d ",  
                 optimalSearchTree(keys, freq, n)); 
    return 0; 
} 
