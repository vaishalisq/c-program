#include<stdio.h>

int main()

{

  int i,j;
  
  for(i='A';i<='E';i++)
  {
     for(j=i;j>='A';j--)
	 {
	     printf("%c\t",j);
	 }
	 
	 printf("\n");
  }
  


}