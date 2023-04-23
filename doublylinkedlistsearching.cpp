#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
} node;
int main()
{
	int i, n;
	printf("enter the number of node you want to create\n");
	scanf("%d",&n);
	node *head, *newnode, *temp;
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("enter the data of the node\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		
	}
	printf("\n");
	printf("printing the doubly linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	printf("performin the search operation in doubly linkedlist\n");
	int search;
	printf("enter the element you want to search in the doubly linkedlist\n");
	scanf("%d",&search);
	int k=0;
	temp=head;
	for(i=0;i<n;i++)
	{
		if(temp->data==search)
		{
			k=1;
			break;
		}
		temp=temp->next;
	}
	if(k==1)
	{
		printf("element found\n");
	}
	else
	{
		printf("not found\n");
	}
	
	return 0;
	
}
