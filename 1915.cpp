#include<iostream>
#include<cstdio>
#include<vector>
#include<fstream>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int m,a;
	double n;
	cin>>m;
	for(int ii=0;ii<m;ii++)
	{
		cin>>n;
		double sum=0,s=0,aver;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
			v.push_back(a);
		}
		aver=sum/n;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]>aver) s++;
		}
		s=s*100/n;
		printf("%.3lf",s);
		printf("%\n");
		v.clear();
	}
}