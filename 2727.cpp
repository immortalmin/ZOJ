#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Info
{
	string aa;
	int bb;
	int cc;
}info;
bool myComp1(const Info & info1,const Info & info2)
{
	if(info1.aa!=info2.aa) return info1.aa<info2.aa;
	else
	{
		if(info1.bb!=info2.bb) return info1.bb<info2.bb;
		else return info1.cc<info2.cc;
	}
}
bool myComp2(const Info &info1,const Info &info2)
{
	if(info1.bb!=info2.bb) return info1.bb<info2.bb;
	else
	{
		if(info1.aa!=info2.aa) return info1.aa<info2.aa;
		else return info1.cc<info2.cc;
	}
}
bool myComp3(const Info &info1,const Info &info2)
{
	if(info1.cc!=info2.cc) return info1.cc<info2.cc;
	else
	{
		if(info1.aa!=info2.aa) return info1.aa<info2.aa;
		else return info1.bb<info2.bb;
	}
}
vector<Info>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,k=0;
	while(cin>>n&&n!=0)
	{
		k++;
		if(k!=1) cout<<endl;
		
		for(int i=0;i<n;i++)
		{
			string s;
			int a,b;
			cin>>s>>a>>b;
			info.aa=s;
			info.bb=a;
			info.cc=b;
			v.push_back(info);
		}
		string ss;
		cin>>ss;
		if(ss[0]=='N') sort(v.begin(),v.end(),myComp1);
		else if(ss[0]=='Y') sort(v.begin(),v.end(),myComp2);
		else sort(v.begin(),v.end(),myComp3);
		for(int i=0;i<n;i++) cout<<v[i].aa<<" "<<v[i].bb<<" "<<v[i].cc<<endl;
		
		v.clear();
	}
}