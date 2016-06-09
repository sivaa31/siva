#include <stdio.h>

int main(void) {
	int n,sum=0,k;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum==k)
	printf("Palindrome\n");
	else
	printf("Not a Palindrome\n");
	// your code goes here
	return 0;
}
