#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  main()
{
int n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%a[i]==0&&a[i]%1==a[i])
printf("%d",a[i]);
}
return 0;
}
