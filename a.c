#include <stdio.h>
int cmpfun(const void *a,const void *b)
{
return (*(int *)a-*(int *)b);
}
int main(void) {
	long long int n,r,k;
	scanf("%lld",&n);
	int i=0,key,a[20],j;
	scanf("%d",&key);
	while(n!=0)
	{
		r=n%10;
		a[i++]=r;
		n=n/10;
	}
	qsort(a,i,sizeof(int),cmpfun);
	for(j=0;j<i-key;j++)
	{
		printf("%d",a[j]);
	}
	
	return 0;
}
