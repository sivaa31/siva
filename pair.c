#include <stdio.h>

int main(void) {
	int n,k,sum,count=0;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		sum=abs(a[i]-a[j]);
		//printf("%d",sum);
			if(sum==k)
	       count++;
	}
	}
 	printf("%d",count/2);

	
	// your code goes here
	return 0;
}
