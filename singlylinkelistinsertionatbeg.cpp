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
	node *head, *newnode, *temp;
	head=NULL;
	printf("how many nodes you want to create\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("enter data of the node\n");
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
	printf("printing the linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	printf("inserting the node at the begining\n");
	node *beginingnode;
	beginingnode=(node *)malloc(sizeof(node));
	printf("enter the data of the first node\n");
	scanf("%d",&beginingnode->data);
	beginingnode->next=head;
	head=beginingnode;
	printf("printing the new linkedlist\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp=temp->next;
	}
	return 0;
}

