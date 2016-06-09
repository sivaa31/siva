#include <stdio.h>

int main(void) {
	int n,i;
	char a[100];
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	// your code goes here
	return 0;
}
