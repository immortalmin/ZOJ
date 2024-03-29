#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
bool myComp(const double&a,const double&b)
{
	return a>b;
}
vector<double>v;
int main()
{
	int n;
	while(cin>>n)
	{
		double a,sum;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),myComp);
		sum=v[0];
		for(int i=1;i<v.size();i++)
		{
			sum=2*sqrt(sum*v[i]);
		}
		printf("%.3lf\n",sum);
		v.clear();
	}
	return 0;
}