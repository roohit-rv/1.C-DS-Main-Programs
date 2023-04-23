#include<stdio.h>
int lsearch(int p, int q, int r);
int main()
{
	int a[100], num, find, search, i;
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
	printf("searching %d in array using linear search with function\n",find);
	search=lsearch(a[100],num,find);
	if(search==1)
	{
		printf("match found\n");
	}
	else
	{
		printf("not found\n");
	}
	return 0;
}
int lsearch(int p, int q, int r)
{
	int j,k=0;
	for(j=0;j<q;j++)
	{
		if(r==j)
		{
			k=1;
			break;
		}
	}
	return k;
}
