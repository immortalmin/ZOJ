#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct Info
{
	double aa;
	double bb;
	double cc;
}info;
bool myComp(const Info&info1,const Info&info2)
{
	return info1.cc>info2.cc;
}
vector<Info>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,m;
	while(scanf("%d%d",&n,&m)==2)
	{
		if(n==-1&&m==-1) break;
		double a,b,c,sum=0;
		for(int i=0;i<m;i++)
		{
			scanf("%lf%lf",&a,&b);//cin>>a>>b;
			c=a/b;
			info.aa=a;
			info.bb=b;
			info.cc=c;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),myComp);
		for(int i=0;i<v.size();i++)
		{
			if(n>=v[i].bb)
			{
				n=n-v[i].bb;
				sum+=v[i].aa;
			}
			else
			{
				sum+=(n/v[i].bb)*v[i].aa;
				break;
			}
		}
		printf("%.3lf\n",sum);
		v.clear();
	}
	return 0;
}