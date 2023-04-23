#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	printf("the given array is\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		
	}
	printf("sorting the array to bring the even integers at left and odd integers at right\n");
	int lft=0, rgt=4;
	while(lft<rgt)
	{
		if(a[lft]%2!=0&&a[rgt]%2==0)
		{
			int temp;
			temp=a[lft];
			a[lft]=a[rgt];
			a[rgt]=temp;
			lft++;
			rgt--;
		}
		 if(a[lft]%2==0)
		{
			lft++;
		}
		if(a[rgt]%2!=0)
		{
			rgt--;
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
