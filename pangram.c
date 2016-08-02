#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str[1000];
	scanf("%s",str);
	int len,hash[256]={0};
	int cout=0,i;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>=65&&str[i]<=91)
		str[i]=str[i]+32;
	}
	for(i=0;i<len;i++)
	{
		hash[str[i]-'a']++;
	}
	for(i=0;i<len;i++)
	{
	
		if(hash[i]==1)
		cout++;
	}
	if(cout==26)
	printf("Panagram\n");
	else
	printf("Not Panagram\n");
	// your code goes here
	return 0;
}
