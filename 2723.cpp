#include<iostream>
#include<vector>
#include<set>
#include<cmath>
using namespace std;
vector<int>v;
set<int>s;
void pt(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(i!=2&&i%2==0) continue;
		for(int j=3;j*j<=i;j+=2)
		{
			if(i%j==0) goto RL;
		}
		v.push_back(i);
RL:continue;
	}
}
int main()
{
	pt(2,500000);
	int i,j,p;
	for(i=0;i<v.size();i++)
	{
		for(j=0;j<v.size();j++)
		{
			p=v[i]*v[j];
			if(p<1000000) s.insert(p);
			else break;
		}
	}
	int n;
	set<int>::iterator it;
	while(cin>>n)
	{
		it=s.find(n);
		if(it!=s.end()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}