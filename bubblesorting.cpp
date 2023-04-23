#include<stdio.h>
void printarray(int *x, int y)
{
	
	for(int i=0;i<y;i++)
	{
		printf("%d\n",x[i]);
	}
	
}
void bs(int *z, int w)
{
	for(int i=0;i<(w-1);i++)
	{
		int flag=0;
		for(int j=0;j<(w-1-i);j++)
		{
			if(z[j]>z[j+1])
			{
				int temp;
				temp=z[j];
				z[j]=z[j+1];
				z[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
int main()
{
	int n;
	int a[n];
	printf("enter the number of elements you want to print in the array\n");
	scanf("%d",&n);
	printf("enter the elemenst of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the given array is\n");
	printarray(a,n);
	printf("sorting the array with the help of bubble sorting\n");
	bs(a,n);
	printf("after sorting the array is\n");
	printarray(a,n);
	
	
}
