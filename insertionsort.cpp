#include<stdio.h>
int main()
{
	int n,a[n];
	printf("enter the number of elements you want to store in the array\n");
	scanf("%d",&n);
	printf("enter the elements in array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("performing the insertion sort operation on the given array\n");
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("after the sorting array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	return 0;
	
}
