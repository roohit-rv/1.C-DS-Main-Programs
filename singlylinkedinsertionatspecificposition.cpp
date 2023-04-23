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
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
	printf("inserting the node specific position\n");
	int pos, num=1;
	printf("enter the position where you want to add the node\n");
	scanf("%d",&pos);
	node *specificnode;
	specificnode=(node *)malloc(sizeof(node));
	printf("enter the data of the node\n");
	scanf("%d",&specificnode->data);
	temp=head;
	if(pos>n)
	{
		printf("invalid\n");
	}
	else
	{
		while(num<pos-1)
		{
			temp=temp->next;
			num++;
			
		}
	}
	specificnode->next=temp->next;
	temp->next=specificnode;
		temp=head;
	printf("printing the new linkedlist\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	} 
	return 0;
	
}

