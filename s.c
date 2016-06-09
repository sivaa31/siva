#include <stdio.h>  
int main(void) {
int n,r,sum=1,k;
scanf("%d",&n); 
k=n;
while(n!=0) 	{
r=n%10; 		
n=n/10;
sum=sum*r; 
}
printf("%d",sum*k); 	// your code goes here 	return 0; }
