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
	temp=head;
	printf("\n");
	printf("printing the circular linkedlist\n");
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("\n");
	printf("counting thelength of the circular linked list\n");
	int count=0;
	temp=head;
	do
	{
		count++;
		temp=temp->next;
		
	}while(temp!=head);
	printf("\n");
	printf("the length of the circular linkedlist is %d node",count);
	printf("\n");
	printf("performing search operation in circular linkedlist\n");
	int search;
	printf("enter the element that you want to search\n");
	scanf("%d",&search);
	int k=0;
	temp=head;
	for(i=0;i<n;i++)
	{
		if(temp->data==search)
		{
			k=1;
			break;
		}
		temp=temp->next;
	}
	if(k==1)
	{
		printf("element found\n");
	}
	else
	{
		printf("not found\n");
	}
	
	return 0;
}
