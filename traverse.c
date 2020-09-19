#include<stdio.h>
void trav(int []);
void main()
{
	int sal[10],i=0,j;
	for(i=0;i<10;i++)
	{
		sal[i]=1000;
	}
	trav(sal);
	printf("After deducting salary\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",sal[i]);
	}
}
void trav(int sal[ ])
{
	int i=0;
	while(i<10)
	{
		sal[i]=sal[i]-500;
		i++;
	}
}

