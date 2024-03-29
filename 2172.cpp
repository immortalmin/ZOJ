#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct Info
{
	string ss;
	int size;
	int num;
}info;
bool myComp(const Info&a,const Info&b)
{
	if(a.size!=b.size) return a.size<b.size;
	else return a.num<b.num;
}
vector<Info>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,k=0;
	while(cin>>n)
	{
		if(n==0) break;
		v.clear();
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			info.ss=s;
			info.size=s.size();
			info.num=i;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),myComp);
		cout<<"SET "<<++k<<endl;
		for(int i=0;i<n;i+=2)
		{
			cout<<v[i].ss<<endl;
		}
		if(n%2!=0)
		{
			for(int i=n-2;i>=0;i-=2)
	     	{
		    	cout<<v[i].ss<<endl;
	    	}
		}
		else
		{
			for(int i=n-1;i>=0;i-=2)
	     	{
		    	cout<<v[i].ss<<endl;
	    	}
		}
	}
	return 0;
}