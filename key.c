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
	for(i=k;i<n;i++)
	{
	printf("%d",a[i]);
	}
	for(i=0;i<k;i++){
	printf("%d",a[i]);
	}
			
  
	// your code goes here
	return 0;
}
