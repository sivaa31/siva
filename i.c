#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)	
{
	if(a[i]==i)
	printf("%d",a[i]);
}

	
	
	return 0;
}
