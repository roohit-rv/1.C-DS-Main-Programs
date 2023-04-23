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
	printf("counting the length of the linkedlist\n");
	int count=0;
	temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	printf("the length of the linkedlist is %d\n",count);
	printf("\n");
	printf("inserting node at specific position\n");
		int pos;
	printf("enter the position where you want to insert the node\n");
	scanf("%d",&pos);
	node *specnode;
	specnode=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&specnode->data);
	specnode->next=NULL;
	specnode->prev=NULL;
	temp=head;
	int num=1;
	while(num<pos-1)
	{
		temp=temp->next;
		num++;
	}
	specnode->next=temp->next;
	specnode->prev=temp;
	temp->next=specnode;
	specnode->next->prev=specnode;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
	
}
