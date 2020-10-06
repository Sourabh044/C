#include<stdio.h>
int main()
{
	int m1[2][2],m2[2][2],sum[2][2];
	int i,j;
	printf("enter elemrnts of first matrix");
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	  {
		scanf("%d",&m1[i][j]);
	  }
	printf("enter elements of second matrix\n");
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	  {
		scanf("%d",&m2[i][j]);
	  }
	  //Adding both matrices
	  for(i=0;i<2;i++)
	   for(j=0;j<2;j++)
	   {
	   	sum[i][j]= m1[i][j]+m2[i][j];
	   }
	   //Printing sum
	   printf("PRINTING THE SUM OF THE MATRICES\n");
	   for(i=0;i<2;i++)
	    {
	    	for(j=0;j<2;j++)
	    	{
	    		printf("%d \t",sum[i][j]);	    	
			}
		printf("\n");
	 	}
	return 0;
 }
