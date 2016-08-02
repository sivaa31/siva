#include<stdio.h>
#include<string.h>
void main()
{
    char string[100],string1[100];
    scanf("%[^\n]s",string);
    int i,length=strlen(string),j,k=0,len,p;
    len=0;
    int m=0;
    for(i=0;i<=length-1;i++)
    {
   	 if(string[i]==' ')
   	 {
   	 p=i;
   	 for(j=p-1;j>=len;j--)
   		 printf("%c",string[j]);
   	 printf(" ");
   	 len=p;
   	 i=p;
   	 }
   	 
    }
for(k=length;k>=p+1;k--)
   		 printf("%c",string[k]);

}


