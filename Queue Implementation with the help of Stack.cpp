#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N];
int s2[N];
int top1=-1;
int top2=-1;
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
	 
	int data;
    if(top1 == N-1){
        printf("overflow\n");
    }
    else{
    printf("Enter the data: ");
    scanf("%d",&data);
    push1(data);
    count++;
    }
	
}
void dequeue()
{
	int i;
    int a;
    int b;
    int x;
	if(top1==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=0;i<count;i++)
		{
			
		    a=pop1();
			push2(a);
			
			
		}
		
	    b=pop2();
	    printf("%d element removed\n",b);
		count--;
		
		for(i=0;i<count;i++)
		{
			x=pop2();
			push1(x);
			
			
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
