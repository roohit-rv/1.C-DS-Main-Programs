#include<stdio.h>
#define N 5
int deque[N],front=-1,rear=-1;
void enqueuefront(int x)
{
	if((rear+1)%N==front)
	{
		printf("overflow\n");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		deque[front]=x;
	}
	else if(front==0)
	{
		front=N-1;
		deque[front]=x;
	}
	else
	{
		front--;
		deque[front]=x;
	}
}
void enqueuerear(int x)
{
	if((rear+1)%N==front)
	{
		printf("overflow\n");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		deque[rear]=x;
	}
	else
	{
		rear=(rear+1)%N;
		deque[rear]=x;
	}
}
void dequeuefront()
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
void dequeuerear()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(rear==0)
	{
		rear=N-1;
		
	}
	else
	{
		rear--;
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
		int i;
		i=front;
		while(i!=rear)
		{
			printf("%d\n",deque[i]);
			i=(i+1)%N;
		}
		printf("%d\n",deque[rear]);
	
	}
}
void getfront()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d\n",deque[front]);
	}
}
void getrear()
{
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d\n",deque[rear]);
	}
}
int main()
{
	printf("Implementing the queue\n");
	while(1)
	{
		int a;
		printf("enter 1 to insert element in queue from front\n");
		printf("enter 2 to insert element in queue from rear\n");
			printf("enter 3 to delete element in queue from front\n");	
				printf("enter 4 to delete element in queue from rear\n");	
				printf("enter 5 to print first element in queue from front\n");
					printf("enter 6 to print first element in queue from rear\n");
			printf("enter 7 to display queue\n");
			printf("enter 8 to exit\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("enter the element you want to insert in the queue\n");
					int num1;
					scanf("%d",&num1);
					enqueuefront(num1);
					break;
					
					case 2:
						printf("enter the element you want to insert in the queue\n");
					int num2;
					scanf("%d",&num2);
					enqueuerear(num2);
					break;
						
					case 3:
					dequeuefront();
					break;
					
					case 4:
						dequeuerear();
						break;
					
					case 5:
					getfront();
					break;
					
					
					case 6:
					getrear();
					break;
					
					case 7:
						display();
						break;
						
						case 8:
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

