#include<stdio.h>
int main()
{
	int a[100], num, find, i, k=0;
	printf("enter the number of elements in the array\n");
	scanf("%d",&num);
	printf("enter the elements of the array\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the given array is\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter the number to find in the array\n");
	scanf("%d",&find);
	printf("searching %d in array using linear search\n",find);
	for(i=0;i<num;i++)
	{
		if(find==a[i])
		{
			k=1;
			break;
		}
	}
	if(k==1)
	{
		printf("match found\n");
	}
	else
	{
		printf("not found\n");
	}
	return 0;
}
