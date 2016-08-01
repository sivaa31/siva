#include <stdio.h>
void fun(int arr[],int n)
{ int i;
	for(i=0;i<n;i++)
  {
   if(arr[i]==i)
  printf("%d",i);
  }
}
int main(void) {
	int i,arr[100];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
			fun(arr,n);
  
	// your code goes here
	return 0;
}
