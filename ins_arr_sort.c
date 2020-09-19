#include<stdio.h>
int insert(int [ ], int n, int item);
void main()
{
	int arr[100];
	int n,i,j,item;
	printf("Enter number of elements:\t");
	scanf("%d",&n);
	printf("\nenter the element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter the new element:\t");
	scanf("%d",&item);
	n= insert(arr, n,item);
	//printing array new
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int insert(int arr[], int n, int item)
{
	int k;
	k = n - 1;// 4
	while(item<= arr[k])
	{
		arr[k+1]= arr[k];
		k = k-1;
	}
	arr[k+1]=item;
	n = n+1;
	return(n);
}

