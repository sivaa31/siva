#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n.l,t;
while(t--)
{
int hash[100]={0};
scanf("%d",&n)
char a[1000],i;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
hash[a[i]-'a]++;
}
for(i=0;i<l;i++)
{
if(hash[a[i]-'a']!='a'&&hash[a[i]-'a']!='e'&&hash[a[i]-'a']!='i'&&hash[a[i]-'a']!='o'&&hash[a[i]-'a']!='u')
printf("%c",hash[a[i]-'a');
}
return 0;
}
