#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v,vv;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a,sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<m;i++)
		{
			cin>>a;
			vv.push_back(a);
		}
		if(v.size()<vv.size())
		{
		    for(int i=0;i<v.size();i++)
			{
				int ss=v[i];
				for(int j=0;j<vv.size();j++)
				{
					if(vv[j]==ss)
					{
						vv.erase(vv.begin()+j);
						//v.erase(v.begin()+i);
						sum++;
						break;
					}
				}
			}
		}
		else
		{
			for(int i=0;i<vv.size();i++)
			{
				int ss=vv[i];
				for(int j=0;j<v.size();j++)
				{
					if(v[j]==ss)
					{
						//vv.erase(vv.begin()+i);
						v.erase(v.begin()+j);
						sum++;
						break;
					}
				}
			}
		}
		cout<<sum<<endl;
		v.clear();
		vv.clear();
	}
	return 0;
}