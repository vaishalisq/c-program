#include<stdio.h>

int main()

{

   int  year;
   
   printf("enter  a year");
   scanf("%d",&year);
   
   if((year%400==0)||(year%100==0)||(year%4==0))
   {
	   printf(" is leap year");
   }
   else{
	   
	   printf("is not leap year");
   }
   
  return 0;

}