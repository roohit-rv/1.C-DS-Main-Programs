#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N];
int s2[N];
int top1=-1;
int top2=-1;
int a;
int b;
int c;
int d;
int e;
int count=0;
void push1(int data1)
{
	if(top1==N-1)
	{
		printf("queue is full\n");
		
	}
	else
	{
		top1++;
		s1[top1]=data1;
		
		
	}
}
void push2(int data2)
{
	if(top2==N-1)
	{
		printf("queue is full\n");
	}
	else
	{
		top2++;
		s2[top2]=data2;
	}
}
int pop1()
{
	
	return s1[top1--];
}
int pop2()
{
	return s2[top2--];
}
void enqueue()
{
	if(top1==N-1)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter the data\n");
		int x;
		scanf("%d",&x);
		push1(x);
		count++;
		
	}
	
	
}
void dequeue()
{
	if(top1==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(int i=0;i<count;i++)
		{
			
		    c=pop1();
			push2(c);
			
			
		}
		
	    d=pop2();
	    printf("%d element removed\n",d);
		count--;
		
		for(int i=0;i<count;i++)
		{
			e=pop2();
			push1(e);
			
			
		}
		
	}
}
void display()
{
	if(top1==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(int i=0;i<=top1;i++)
		{
			printf("%d\n",s1[i]);
		}
	}
}
void peek()
{
	if(top1==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d\n",s1[0]);
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
			int f;
			scanf("%d",&f);
			switch(f)
			{
				case 1:
				
					enqueue();
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
