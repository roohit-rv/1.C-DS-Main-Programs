#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
node *front=NULL, *rear=NULL;
void enqueue(int x)
{
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	node *temp;
	temp=front;
	if(front==NULL&&rear==NULL)
	{
		printf("queue is empty\n");
	}
	else
	{
		front=front->next;
		free(temp);
		
	}
}
void peek()
{
	printf("%d\n",front->data);
}
void display()
{
	node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{ 

printf("implementing queue with the help of linkedlist\n");
int n;
	while(1)
	{
	
	
	printf("press 1 for inserting element in the queue\n");
	printf("press 2 for deleting element in the queue\n");
	printf("press 3 for displaying the first element in the queue\n");
	printf("press 4 for displaying the whole elements in the queue\n");
	printf("press 5 for exit\n");
	scanf("%d",&n);
	switch(n)
	{
			case 1:
				int a;
				printf("enter the element\n");
				scanf("%d",&a);
				enqueue(a);
				break;
				
		case 2:
		dequeue();
		break;
		
		case 3:
			peek();
			break;
			
			case 4:
				display();
				break;
				
				case 5:
					printf("successfully exited\n");
					goto exit;
					break;
				
				default :
					printf("enter valid input\n");
					break;
		
			
	}
}
exit :
return 0;
	

		
}
