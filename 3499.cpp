#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
vector<double>v;
int main()
{
	int n,m;
	while(cin>>n)
	{
		while(n--)
		{
			double a;
			cin>>m;
			for(int i=0;i<m;i++)
			{
				cin>>a;
				v.push_back(a);
			}
			sort(v.begin(),v.end());
			int l=v.size();
			if(l%2!=0) printf("%.3lf\n",v[l/2]);//cout<<v[l/2]<<endl;
			else printf("%.3lf\n",(v[l/2]+v[l/2-1])/2);
			v.clear();
		}
	}
	return 0;
}