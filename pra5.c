#include<stdio.h>

int main()

{
  int i,n,a=1,b=1,c;

  printf("enter a number:\n");
  scanf("%d,&n");
  
  for(i=1;i<=n;i++)
  {
     printf("%d\t",a);
	 c=a+b;
	 a=b;
	 b=c;
  
  }


}