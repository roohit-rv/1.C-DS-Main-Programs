#include<stdio.h>
void add();
void sub(int a, int b);
int mult();
int div(int c, int d);
 int main()
{
	int z;
	
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	printf("press 5 for exiting calculation\n");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
			add();
			break;
			
			case 2:
		int e, f;
		printf("enter two numbers for subtraction\n");
		scanf("%d %d",&e,&f);
		sub(e,f);
		break;
		case 3:
			int multiplication;
			multiplication=mult();
			printf("the result of multiplication is %d\n",multiplication);
			break;
			
			case 4:
				int division, g, h;
				printf("enter two numbers for division\n");
				scanf("%d %d",&g,&h);
				division=div(g,h);
				printf("the result of division is %d\n", division);
				break;
				case 5:
					printf("successfully exited\n");
					break;
				
    
	}
	return 0;
  	
}
void add()
{
	int i,j,k;
	printf("enter two numbers for addition\n");
	scanf("%d %d",&i,&j);
	k=i+j;
	printf("the result of addition is %d\n",k);
}
void sub(int a, int b)
{
	int l;
	l=a-b;
	printf("the result of subtraction of is %d\n",l);
	
	
}
int mult()
{
	int m, n, o;
	printf("enter two numbers for multiplication\n");
	scanf("%d %d",&m,&n);
	o=m*n;
	return o;
}
int div(int c, int d)
{
	int p;
	p=c/d;
	return p;
}


