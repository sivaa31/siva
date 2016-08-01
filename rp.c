#include <stdio.h>

int main(void) {
	int i,arr[100];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
  for (i=0;i<n;i++)
  {
    if (arr[abs(arr[i])] >= 0)
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    else
      printf("%d ",abs(arr[i]));
  }
	// your code goes here
	return 0;
}
