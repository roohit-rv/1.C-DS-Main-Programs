#include<iostream>
using namespace std;
int main()
{
	int a[8]={1,1,0,0,1,0,1,0};
	int count=0;
	printf("given array is\n");
	for(int i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("sorting the array 0 all to left and 1 to right\n");
	for(int i=0;i<8;i++)
	{
		if(a[i]==0)
		{
			count=count+1;
		}
	}
	for(int i=0;i<8;i++)
	{
		if(i<count)
		{
			a[i]=0;
		}
		else
		{
			a[i]=1;
		}
	}
	for(int i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
}
