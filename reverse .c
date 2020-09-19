#include<stdio.h>
void main()
{
	int n,rev,rem,i;
	printf("Enter the number\n");
	scanf("%d",n);
	while(n>0);
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
		
	}
	printf("the REVERSE of this number is %d",rev);
	if(rev==n)
	printf("its a palindrome number");
	else
	printf("its not a palindrome number");
}
