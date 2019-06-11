#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdio>
using namespace std;
vector<string>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,m;
	while(cin>>n>>m)
	{
		int w=0;
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			v.push_back(s);
		}
		for(int i=0;i<m;i++)
		{
			int aa,bb;
			string s;
			cin>>aa>>bb;
			int sum=0;
			for(int j=0;j<aa;j++)
			{
				cin>>s;
				for(int z=0;z<v.size();z++) if(s==v[z]) sum++;
			}
			if(sum<bb) w=1;
		}
		if(w==1) printf("no\n");
		else printf("yes\n");
		v.clear();
	}
}