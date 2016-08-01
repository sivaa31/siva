#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int i,a[100],j,k;
	int n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
			if(abs(a[i]-a[j])==k)
			{
			count++;
				
			}
	}
	}
	
	printf("%d",count);
			
  
	// your code goes here
	return 0;
}
