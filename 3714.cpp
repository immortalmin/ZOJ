#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v,vv;
bool myComp(const int&a,const int&b)
{
	return a>b;
}
int main()
{
	int t,n,m,a;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;
			for(int i=0;i<n;i++)
			{
				cin>>a;
				v.push_back(a);
			}
			for(int i=0;i<v.size();i++)
			{
				int k=0,sum=0;
				for(int j=i;;j++)
				{
					if(j==v.size()) j=0;
					sum+=v[j];
					k++;
					if(k==m)
					{
						vv.push_back(sum);
						break;
					}
				}
			}
			sort(vv.begin(),vv.end(),myComp);
			cout<<vv[0]<<endl;
			v.clear();
			vv.clear();
		}
	}
	return 0;
}