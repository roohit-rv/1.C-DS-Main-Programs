#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
int main()
{
	int n, i;
	printf("enter the number of nodes you want to create\n");
	scanf("%d",&n);
	node *head, *newnode, *temp;
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
			temp->next=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			temp->next=head;
			
		}
	}
	printf("\n");
	printf("printing the linkedlist\n");
	temp=head;
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("\n");
	printf("inserting node at the end\n");
	node *lastnode;
	lastnode=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&lastnode->data);
	lastnode->next=head;
	temp=head;
	do
	{
		temp=temp->next;
	}while(temp->next!=head);
	temp->next=lastnode;
	printf("\n");
	printf("printing the linkedlist\n");
	temp=head;
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
	
	
	
	return 0;

	
}

