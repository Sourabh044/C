#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("values before swapping\na=%d\nb=%d\n",a,b);
	swap(&a,&b);
	printf("values after swapping\na=%d\nb=%d",a,b);
}
void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
