#include<iostream>
using namespace std;
int main()
{
	int a[5]={6,2,4,3,1};
	cout<<"the given array is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
		
	}
	int prefix=0, suffix=0, i, j, index;
	cout<<"finding a partition in the array to check if any exist index before that prefix is equal to suffix"<<endl;
	for(i=0;i<5;i++)
	{
		prefix=a[i]+prefix;
		index=i;
		suffix=0;
		for(j=i+1;j<5;j++)
		{
			suffix=suffix+a[j];
			
		}
		if(prefix==suffix)
		{
			cout<<"yes, the partition starts from the index "<<index<<" element "<<a[i]<<endl;
			goto exit;
		}
		else if(i==4&&prefix!=suffix)
		{
			cout<<"no such partition exist"<<endl;
			goto exit;
		}
	}
	exit :
		
		return 0;
}
