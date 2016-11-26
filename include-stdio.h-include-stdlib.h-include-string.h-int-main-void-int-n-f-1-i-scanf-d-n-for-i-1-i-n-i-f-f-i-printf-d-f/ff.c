#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int n,f=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f=f*i;
		
		printf("%d",f);
	// your code goes here
	return 0;
}
