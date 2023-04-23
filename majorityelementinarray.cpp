#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the given array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	int x=n/2;
	int num;
	int count;
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
		  if(arr[i]==arr[j])
		  {
		  	num=arr[i];
		  	count++;
			  }	
			if(count>x)
	{
		printf("%d is the majority element\n",num);
	}
		}
	}
	
	
	return 0;
	
}
