#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,a;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int w=0,sum1=0,sum2=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=w) sum1++;
		if(w==0) w=1;
		else w=0;
	}
	int ww=1;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=ww) sum2++;
		if(ww==0) ww=1;
		else ww=0;
	}
	//cout<<sum1<<" "<<sum2<<endl;
	sum1>sum2?cout<<sum2<<endl:cout<<sum1<<endl;
	v.clear();
	}
	
	return 0;
}