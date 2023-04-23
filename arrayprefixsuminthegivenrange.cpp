#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> v(n+1,0);
	cout<<"enter the number of elements you want to store in the vector"<<endl;
     
     cin>>n;
     for(int i=1;i<=n;i++)
     {
     	cin>>v[i];
	 }
	 cout<<"elements of the vector are"<<endl;
	 for(int i=1;i<=n;i++)
	 {
	 cout<<v[i]<<endl;	
	 }
	 
	 for(int i=1;i<=n;i++)
	 {
	 	v[i]=v[i]+v[i-1];
	 }
	cout<<"enter the number of queries you want to do"<<endl;
	 int q;
	 cin>>q;
	 while(q!=0)
	 {
	 	cout<<"enter the starting range of the array"<<endl;
	 	int l;
	 	cin>>l;
	 	cout<<"enter the ending range of the array"<<endl;
	 	int r;
	 	cin>>r;
	 	int ans=0;
	 	ans=v[r]-v[l-1];
	 	cout<<"the pefix sum of the array of the given range in the array is "<<ans<<endl;
	 	q--;
	 }
	 return 0;
	 
}
