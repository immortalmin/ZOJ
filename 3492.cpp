#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
vector<string>v;
int main()
{
	int n,m;
	cin>>n;
	while(n--)
	{
		string s,ss;
		cin>>m>>s;
		for(int i=0;i<m;i++)
		{
			cin>>ss;
			v.push_back(ss);
		}
		int l=m/2;
		for(int i=0;i<v.size();i++)
		{
			if(s==v[i]&&i<l) cout<<v[l+i]<<endl;
			else if(s==v[i]&&i>=l) cout<<v[i-l]<<endl;
		}
		v.clear();
	}
	return 0;
}