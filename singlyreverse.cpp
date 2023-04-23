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
	node *head, *newnode, *temp, *prevnode, *nextnode;
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
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	printf("\n");
	printf("printing the linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	prevnode=NULL;
	temp=nextnode=head;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		temp->next=prevnode;
		prevnode=temp;
		temp=nextnode;
	}
	head=prevnode;
	printf("\n");
	printf("printing the linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
