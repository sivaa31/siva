#include <stdio.h>

int main(void) {
	int t,n1,n2;
	scanf("%d",&t);
	int arr[100],i,sum=0;
	arr[0]=0,arr[1]=1;
	for(i=2;i<t;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		
	}
	for(i=0;i<t;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
	// your code goes here
	return 0;
}
