#include<stdio.h>
int main()
{
	int a[10],i,pos,x;
	printf("enter the elements of the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the psoition where you want to delete the array\n");
	scanf("%d",&pos);
	
	for(i=pos;i<10;i++)
	{
		a[i]=a[i+1];
	}
	a[10]--;
	printf("the array after deleting\n");
	for(i=0;i<9;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
