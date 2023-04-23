#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
node *top=NULL;
void push(int x)
{
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	node *temp;
	temp=top;
	if(top==NULL)
	{
		printf("stack is empty\n");
		
	}
	else
	{
		
	
	
	top=top->next;
	free(temp);
}
	
}
void peek()
{
	if(top==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("%d\n",top->data);
	}
}
void display()
{
	node *temp;
		temp=top;
	if(top==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
		
		printf("%d\n",temp->data);
		temp=temp->next;
	}
		
		
	}
}
int main()
{
	printf("implementing stack with the help of linkedlist\n");
	while(1)
	{
		printf("enter 1 for inserting the element into the stack\n");
		printf("enter 2 for deleting the element into the stack\n");
		printf("enter 3 for displaying only the first or last inserted the element into the stack\n");
		printf("enter 4 for displaying the element of the stack\n");
		printf("enter 5 to exit\n");
		int n;
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the element\n");
				int a;
				scanf("%d",&a);
				push(a);
				break;
				
				case 2:
					pop();
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
