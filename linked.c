#include<stdio.h>
struct node
{
	int info;
	struct node *link;
};
struct node *START=NULL;
struct node * CreateNode()
{
	struct node *n;
	n= (struct node *)malloc(sizeof(struct node));
	return(n);
}
traverse(struct node * *START)
{
	struct node *ptr;
	int i=1;
	if (START=NULL)
	printf("The list is empty");
	
	ptr=START;
	while(ptr!=START)
	{
		printf("the Item Number %d in List is %d",i,ptr->info);
		ptr=ptr->link;
		i=i+1;
	 } 
}
void insertfirst(struct node* *START,int item)
{
	struct node *ptr;
	if(*START==NULL)
	{
		*START=(struct node *)malloc(sizeof(struct node));
		(*START)->item;
		(*START)->link=Null;
	}
	printf("item is inserted at Firs nODE");
}
void main()
{
	int ch,item;
	while (1)
	printf("enter 1i or 2t");
	scanf("%d".&ch);
	switch (ch)
	{
		case 1:
			printf("enter item")
			scanf("%d",&item);
			insertfirst(&start,item);
			break;
		case 2:
			traverse(&start);
		default:
			printf("enter gud");
	}
	
	
	
	
	
	
	
	
	
	
	
}
