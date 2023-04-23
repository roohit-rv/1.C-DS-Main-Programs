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
	printf("inserting the node at specific position\n");
	node *specnode;
	specnode=(node *)malloc(sizeof(node));
	int pos;
	printf("enter the position where you want to insert the node\n");
	scanf("%d",&pos);
	printf("enter the data\n");
	scanf("%d",&specnode->data);
	specnode->next=NULL;
	temp=head;
	int num=1;
	while(num<pos-1)
	{
		temp=temp->next;
		num++;
	}
	specnode->next=temp->next;
	temp->next=specnode;
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

