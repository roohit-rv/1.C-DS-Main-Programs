#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x)
{
	if(top==N-1)
	{
		printf("overflow\n");
	}
	else
	{
		top++;
		stack[top]=x;
		
	}
}
void pop()
{
	if(top==-1)
	{
		printf("undeflow\n");
	}
	else
	{
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("%d\n",stack[top]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	printf("implementing stack with the help of array\n");
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
