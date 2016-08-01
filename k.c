#include <stdio.h>
int main(void) {
	int i,a[100],j,k;
	int n,hash[256]={0};
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
		if(a[i]+a[j]==k)
		{
		printf("%d %d",a[i],a[j]);
		break;
		}
		
	}
	}
			
  
	// your code goes here
	return 0;
}
