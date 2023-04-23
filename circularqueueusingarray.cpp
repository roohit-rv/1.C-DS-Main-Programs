#include<stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue(int x)
{
	if((rear+1)%N==front)
	{
		printf("overflow\n");
		
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%N;
	}
}
void peek()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d\n",queue[front]);
	}
}
void display()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("%d\n",queue[i]);
			i=(i+1)%N;
			
		}
		printf("%d\n",queue[rear]);
	}
}
int main()
{
	printf("Implementing the queue\n");
	while(1)
	{
		int a;
		printf("enter 1 to insert element in queue\n");
			printf("enter 2 to delete element in queue\n");	
				printf("enter 3 to print first element in queue\n");
			printf("enter 4 to display queue\n");
			printf("enter 5 to exit\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("enter the element you want to insert in the queue\n");
					int b;
					scanf("%d",&b);
					enqueue(b);
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
					goto exit;
					break;
					
					default:
					printf("enter valid input\n");
					break;	
						
			}
					
	}
	exit:
	printf("successfully exited\n");
	return 0;
}
