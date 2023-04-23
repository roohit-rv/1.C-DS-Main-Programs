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
printf("deleting the node at specific position\n");
int pos;
printf("enter the position where you want to delete the node\n");
scanf("%d",&pos);
temp=head;
int num=1;
node *nextnode;
while(num<pos-1)
{
	temp=temp->next;
	num++;
}
nextnode=temp->next;
temp->next=nextnode->next;
nextnode->next->prev=nextnode->prev;
nextnode->next=NULL;
nextnode->prev=NULL;
free(nextnode);
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
