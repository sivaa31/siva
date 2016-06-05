#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
long long int n,f=1,i;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
}
