#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
long long int n,r;
scanf("%d",&n);
while(n>0)
{
r=n%10;
n=n/10;
}
printf("%d",r);
return 0;
}
