#include <stdio.h>

int main(void) {
	int n,count=0,sum;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		sum=abs(a[i]-a[j]);
			if(sum>count)
	  		count=sum;
	  }
	}
 	printf("%d",count);

	
	// your code goes here
	return 0;
}
