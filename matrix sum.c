#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],i,j,sum[2][3];
	printf("Enter The Elements Of First Matrix\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	printf("\nEnter sum of SECOND MATRIX\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);	
		}
	// adding matrices
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
		}
	//printing sum matrix
	printf("THE SUM OF BOTH MATRICES IS\n");
	for(i=0;i<2;i++)
		{
		 	for(j=0;j<2;j++)
			{
				printf("%d\t",sum[i][j]);	
			}	
			printf("\n");
		}
}

