#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int hash[100]={0};
char a[1000];
int l,i,max=0;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
hash[a[i]-'a']++;
}
for(i=0;i<l;i++)
{
if(hash[i]>max)
max=hash[i];
}
printf("%d",max);
}
return 0;
}
