#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void del(int [],int,int);
void insert(int [],int,int,int);
void sub_trav(int[],int,int,int,int am);
void add_trav(int[],int,int,int,int am);
int main()
{
	int i=0,a[100],n,o,am,item,j,operation;
	printf("How many Elements\n");
	scanf("%d",&n);// taking the size of array
	printf("Enter the elements of Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);				// taking elements
	}
	while(1)
	{
	printf("==========================================================================\nMeNu\n");
	printf("==========================================================================\n");
	printf("Enter the no. of your choice\n1 -> Simply Traverse\n2 -> Addition\n3 -> Subtraction\n4 -> Other OPERATIONS\n5 -> Quit\n");
	scanf("%d",&o);
	switch(o)
	{
		case 1: am=0;
		add_trav(a,n,i,o,am);
		printf("The Elements of array are -->\n");
			for(i=0;i<n;i++)
				{
				 printf("%d\n",a[i]);
				}
				break;
		case 2: printf("Enter the Amount For Addition\n");
		scanf("%d",&am);add_trav(a,n,i,o,am);
		printf("The Elements of Array are -->\n");
			for(i=0;i<n;i++)
			{
				printf("%d\n",a[i]);
			}
		break;
		case 3: printf("Enter the Amount For Subtraction -->\n");
		scanf("%d",&am);sub_trav(a,n,i,o,am);
		printf("The Elements are -->\n");
		for(i=0;i<n;i++)
			{
				printf("%d\n",a[i]);
			}
		break;
		case 4: system("clear");
			while(1)
			{
			printf("Enter Your choice -->\n1--> Insertion\n2--> Deletion\n3--> Exit\n");
			scanf("%d",&operation);
				switch(operation)
					{
						case 1 :
							printf("Enter the location Where u want to insert Element-->");
							scanf("%d",&j);
							if(j>=100)
							printf("location Exceeded array size\n");
							else
							printf("Enter the element to be inserted  ");
							scanf("%d",&item);
							insert(a,j,item,n);
							printf("Printing Array\n");
							for(i=0;i<n;i++)
								{
								 printf("%d\n",a[i]);
								}
								printf("Array Storage = %d/100",n);break;
						case 2:
							printf("Enter the location to deleted  ");
							scanf("%d",&j);
							del(a,j,n);
							n= n-1;
							printf("Printing Array\n");
							for(i=0;i<n;i++)
								{
								 printf("%d\n",a[i]);
								}
								printf("Array Storage = %d/100",n);
							break;
						case 3 : printf("Good Bye!");
							exit(0); break;
						default: printf("Wrong choice");break;
					}
		}
		case 5: printf("Quiting app\nGOOD BYE! See yAa");
				exit (0);
				break;
		default: printf("Wrong choice");break;
	}
	}
}
void add_trav(int a[],int n,int i, int o,int am)
{
		for(i=0;i<n;i++)
		{	
			a[i]=a[i]+am;
		}
}
void sub_trav(int a[],int n,int i, int o, int am)
{
		for(i=0;i<n;i++)
		{	
			a[i]=a[i]-am;
		}
}
void insert(int a[],int j,int item,int n)
{
	int k=n;
	while(k>=j-1)
	{
		a[k+1]=a[k];
		k= k-1;
	}
	a[j-1]=item;
	n=n+1;
}
void del(int a[],int j,int n)
{
	int d=j-1;
	while(d<=n-1)
{
	a[d]=a[d+1];
	d = d+1;
}
}
