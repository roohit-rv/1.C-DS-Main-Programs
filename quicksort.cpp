#include<stdio.h>

int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	int temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return end;
}
void quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
	   int loc=partition(a,lb,ub);
	   quicksort(a,lb,loc-1);
	   quicksort(a,loc+1,ub);
	}
}
void print(int a[],int n)
{
	printf("the array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int n=9;
	int a[n]={7,6,10,5,9,2,1,15,7};
	int lb=0,ub=8,start=0,end=8;
    print(a,n);
	printf("performing the quick sort operation in the given array\n");
	quicksort(a,lb,ub);
	print(a,n);
}
