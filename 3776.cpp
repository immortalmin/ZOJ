#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int nn,m,n;
	while(cin>>nn)
	{
		for(int ii=0;ii<nn;ii++)
		{
			cin>>n>>m;
			int a;
			int sum1=0,sum2=0;
			for(int i=0;i<n;i++)
			{
				cin>>a;
				sum1+=a;;
			}
			for(int i=0;i<m;i++)
			{
				cin>>a;
				sum2+=a;;
			}
			if(sum1>sum2) cout<<"Calem"<<endl;
			else if(sum1<sum2) cout<<"Serena"<<endl;
			else cout<<"Draw"<<endl;
		}
	}
	return 0;
}