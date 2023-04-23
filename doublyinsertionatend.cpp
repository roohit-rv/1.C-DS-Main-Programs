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
	node *head, *newnode, *temp, *tail;
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
			tail=newnode;
		}
		
	}
	printf("\n");
	printf("\n");
	temp=head;
	printf("printing the linkedlist\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	printf("inserting node at the end\n");
	node *lastnode;
	lastnode=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&lastnode->data);
	lastnode->next=NULL;
	lastnode->prev=NULL;
	tail->next=lastnode;
	lastnode->prev=tail;
	tail=lastnode;
	temp=head;
	printf("\n");
		printf("printing the doubly linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
	
}
