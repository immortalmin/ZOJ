#include<iostream>
using namespace std;
int main()
{
	int n,m,a;
	cin>>n;
	while(n--)
	{
		cin>>m;
		int sum=0;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			sum+=a;
		}
		cout<<sum-m+1<<endl;
	}
	return 0;
}