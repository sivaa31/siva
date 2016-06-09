#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int n;
	int i,hash[100]={0},s;
	char b[100];
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		s=b[i]%96;
		printf("%d",s);
	}
	// your code goes here
	return 0;
}
