#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
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
	printf("\n");
	printf("inserting the node at the begining\n");
	node *firstnode;
	firstnode=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&firstnode->data);
	firstnode->next=NULL;
	temp=head;
	firstnode->next=head;
    do
	{
		temp=temp->next;
	}while(temp->next!=head); 
	temp->next=firstnode;
	head=firstnode;
    printf("%d ",temp->next->data);
	temp=head;
	printf("\n");
	printf("printing the circular linkedlist\n");
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
	return 0;
	}
