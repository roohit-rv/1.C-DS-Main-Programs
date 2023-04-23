#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,4,1,2,3};
	cout<<"the given array is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"changing the same array to it's prefix sum without making any new array"<<endl;
	for(int i=0;i<5;i++)
	{
		if(a[i]==0)
		{
			cout<<a[i]<<endl;
			
		}
		else
		{
			a[i]=a[i]+a[i-1];
			cout<<a[i]<<endl;
		}
	}
	return 0;
}
