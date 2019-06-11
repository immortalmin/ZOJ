#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		int a[100];
		int sum=0;
		for(int j=0;j<m;j++) cin>>a[j];
		for(int ii=1;ii<m-1;ii++)
		{
			if(a[ii]>a[ii+1]&&a[ii]>a[ii-1]) sum++;
		}
		cout<<sum<<endl;
	}
	}
	
}