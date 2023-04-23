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
	int n, i;
	printf("enter the number of nodes you wantto create\n");
	scanf("%d",&n);
	node *head, *newnode, *temp;
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
			temp->next=newnode;
			temp->prev=newnode;
		}
		else 
		{
			temp->next=newnode;
			newnode->prev=temp;
			newnode->next=head;
			head->prev=newnode;
			temp=newnode;
			
		}
	}
	printf("\n");
	printf("printing the doubly circular linkedlist\n");
	temp=head;
	do
	{
		printf("%d ", temp->data);
		temp=temp->next;
		
	} while(temp!=head);
	return 0;
}
