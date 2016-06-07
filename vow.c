#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int t,i,count=0;
	char a[100];
	scanf("%s",a);
	t=strlen(a);
	for(i=0;i<t;i++)
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e')
		count++;
	}
	printf("%d",count);
	return 0;
}
