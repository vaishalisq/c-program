#include<stdio.h>
int main()
{
   int i,n;
   
   printf("enter a number");
   scanf("%d",&n);
   
   for(i=1;i<=n;i*=2)
   { 
      
	   printf("%d\t",i);
       
   }
 
}