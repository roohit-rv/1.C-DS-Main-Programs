#include<stdio.h>
int main()
{   
    int n=6; 
	int a[n]={7,4,10,8,3,1};
	printf("the given array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("performing the selection sort operation in the array\n");
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp;
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			
		}
	}
	printf("the sorted array is\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
}
