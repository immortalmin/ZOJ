#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Info
{
	string aa;
	int bb;
}info;
bool myComp(const Info&info1,const Info&info2)
{
	return info1.bb>info2.bb;
}
vector<Info>v;
int main()
{
	
	int n;
	string s;
	while(cin>>n)
	{
		v.clear();
		info.aa="abc";
		info.bb=0;
		v.push_back(info);
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<v.size();j++)
			{
				if(s==v[j].aa) v[j].bb++;
				else if(j==v.size()-1)
				{
					info.aa=s;
					info.bb=1;
					v.push_back(info);
				}
			}
			
		}
		sort(v.begin(),v.end(),myComp);
		cout<<v[0].aa<<endl;
	}
	return 0;
}