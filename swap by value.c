#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("values before swapping\n A = %d\n B = %d\n",a,b);
	swap(a,b);
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("values after swapping\n A = %d\n B = %d\n",x,y);
}
