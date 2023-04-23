#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
int main()
{

int i,n;
printf("enter the number of node you want to create\n");
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
	}
	else
	{
	  temp->next=newnode;
	  temp=newnode;
	}
}
	printf("printing the linked list\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	printf("deleting the last node\n");
	node *prevnode;
	temp=head;
	while(temp->next!=0)
	{
		prevnode=temp;
		temp=temp->next;
	}
	prevnode->next=NULL;
	free(temp);
		printf("printing the linked list\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
	


