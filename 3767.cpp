#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n)
	{
		int a,b;
		while(n--)
		{
			cin>>m>>a;
			int sum=0;
			for(int i=0;i<m;i++)
			{
				cin>>b;
				sum+=b;
			}
			if(sum>a) cout<<"Warning"<<endl;
			else cout<<"Safe"<<endl;
		}
	}
	return 0;
}