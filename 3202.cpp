#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
struct Info
{
	int aa;
	int bb;
}info;
bool myComp(const Info&info1,const Info&info2)
{
	return info1.bb>info2.bb;
}
vector<Info>v;
int main()
{
	int n,m,a;
	cin>>n;
	while(n--)
	{
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			info.aa=i+1;
			info.bb=a;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),myComp);
		cout<<v[0].aa<<" "<<v[1].bb<<endl;
		v.clear();
	}
	return 0;
}