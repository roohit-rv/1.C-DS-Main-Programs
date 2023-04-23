#include<iostream>
using namespace std;
int main()
{
	int a[8]={1,1,0,0,1,0,1,0};
	printf("the given array is\n");
	for(int i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("sorting array all 0 to left and all 1 to right in just one traversal\n");
	int leftptr=0, rightptr=7;
	while(leftptr<rightptr)
	{
		if(a[leftptr]==1&&a[rightptr]==0)
		{
			a[leftptr]=0;
			a[rightptr]=1;
			leftptr++;
			rightptr--;
		}
		 if(a[leftptr]==0)
		{
			leftptr++;
		}
		
	     if(a[rightptr]==1)
		{
			rightptr++;
			
		}
	}
	for(int i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
