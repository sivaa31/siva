#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str[100];
	int len,i;
	scanf("%s",str);
	len=strlen(str);
	for(i=len;i>=0;i--)
	printf("%c",str[i]);
	
	// your code goes here
	return 0;
}
