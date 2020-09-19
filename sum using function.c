#include<stdio.h>
int sum(int,int);
void main()
{
	int a,b,s;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	s = sum(a,b); //function call
	printf("the sum of numbers is %d",s);
}
int sum( x, y)
{
	return(x+y);
}
