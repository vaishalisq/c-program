#include<stdio.h>

int main()
{
  int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}},arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  printf("arr1 enter:\n");
  
  for(int i=0;i<3;i++)
  {
	  for(int j=0;j<3;j++)
	  {
		  printf(" %d ",arr1[i][j]);
		 
	  }
	   printf("\n");
  }
  
  printf("arr2 enter:\n");
  
  for(int i=0;i<3;i++)
  {
	  for(int j=0;j<3;j++)
	  {
		  printf(" %d ",arr2[i][j]);
		 
	  }
	   printf("\n");
  }
  
  printf("array total\n");
  
  for(int i=0;i<3;i++)
  {
	  
	  
	  for(int j=0;j<3;j++)
	  {                                                                                                                        
		  printf(" %d ",arr1[i][j]+arr2[i][j]);
		  
	  }
	  printf("\n");
  }
  
  
   
	
	
	
	


}