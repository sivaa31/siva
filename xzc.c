#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int l,t;
scanf("%d",&t);
while(t--)
{
//int hash[100]={0};
//scanf("%d",&n)
char a[1000];
int i;
scanf("%s",a);
//printf("%s",a);
l=strlen(a);
//printf("%d",l);
for(i=0;i<l;i++)
{
	if(a[i]!='a'&&a[i]!='i'&&a[i]!='o'&&a[i]!='e'&&a[i]!='u')
	printf("%c ",a[i]);
}
}
return 0;
}
