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
printf("deleting linkedlist at specific position\n");
int pos;
printf("enter the position of the node which you want to delete\n ");
scanf("%d",&pos);
temp=head;
node *nextnode;
nextnode=(node *)malloc(sizeof(node));
int j=1;
while(j<pos-1)
{

	temp=temp->next;
	j++;
}
nextnode=temp->next;
temp->next=nextnode->next;
nextnode->next=NULL;
free(nextnode);
printf("\n");
printf("printing the linked list\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}

	return 0;
}
	


