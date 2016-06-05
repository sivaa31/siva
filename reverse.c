#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int l,i;
char a[1000];
scanf("%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--)
{
printf("%s",a);
}
return 0;
}
