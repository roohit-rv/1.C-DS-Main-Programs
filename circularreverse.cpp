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
	printf("enter the number of nodes you want to create\n");
	scanf("%d",&n);
	node *head, *temp, *newnode;
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
	printf("printing the linkedlist\n");
	temp=head;
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("\n");
	printf("performing the reverse operation on circular linkedlist\n");
	node *prevnode, *nextnode, *tempo;
    temp=nextnode=head;
    prevnode=NULL;
    do
    {
    	nextnode=nextnode->next;
    	temp->next=prevnode;
    	prevnode=temp;
    	temp=nextnode;
	} while(nextnode!=head);
	tempo=head;
	head=prevnode;
	tempo->next=prevnode;
	printf("\n");
	printf("printing the reverse circular linkedlist\n");
	temp=head;
	do
	{
		printf("%d ", temp->data);
		temp=temp->next;
	} while(temp!=head);
	return 0;
}
