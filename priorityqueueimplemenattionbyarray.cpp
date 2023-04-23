#include<stdio.h>
#define N 5
int front=-1,rear=-1,queue[N],pos;
void enqueue(int x)
{
	if(rear==N-1)
	{
		printf("queue is full\n");
	}
	else
	{
		pos=rear;
		rear=rear+1;
		while(pos>=0&&queue[pos]>=x)
		{
			queue[pos+1]=queue[pos];
			pos=pos-1;
		}
		queue[pos+1]=x;
		if(front==-1)
		{
			front=front+1;
		}
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
		rear--;
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
		for(int i=0;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
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

