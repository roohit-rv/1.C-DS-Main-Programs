#include<iostream>
using namespace std;
int main()
{
	int a[6]={-10,-4,1,2,3,7};
	printf("the given array is\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
		
	}
	for(int i=0;i<6;i++)
	{
		if(a[i]<0)
		{
			a[i]*=-1;
		}
	}
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("printing the given array in sorted form with their number squared\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",a[i]*a[i]);
	}
	return 0;
}
