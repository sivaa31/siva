#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=3;i<n;i++)
	printf("%d",a[i]);
	for(i=0;i<3;i++)
	printf("%d",a[i]);
	
	// your code goes here
	return 0;
}
