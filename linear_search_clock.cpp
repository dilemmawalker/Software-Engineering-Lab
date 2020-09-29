#include<iostream>
#include <time.h>
#include <cstdlib>
 
using namespace std;
 
int main()
{
	time_t start, end;
	int a[1000],n=1000,x,i,flag=0;
	
	
	for(i=0;i<1000;++i)
		a[i]= rand() % n;
	
	cout<<"\nEnter element to search: between 1 to 1000";
	cout << endl;
	cin>>x;
	start = clock();
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	end = clock();
	double tc=(difftime(end,start)/CLOCKS_PER_SEC);
	cout <<"time taken for this " << tc;
	
	if(flag)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";
	
		
	return 0;
}
