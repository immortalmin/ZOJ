#include<iostream>
#include<set>
using namespace std;
int main()
{
//	freopen("1.txt","r",stdin);
	int n,m;
	while(cin>>n>>m&&n&&m)
	{
		int a[10001]={0};
		for(int i=0;i<m;i++)
		{
			int b;
			cin>>b;
			a[b]++;
		}
		int k=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>1) k++;
		}
		cout<<k<<endl;
	}
	return 0;
}