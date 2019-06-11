 #include<iostream>
#include<vector>
using namespace std;
struct Info
{
	int aa;
	int bb;
}info;
vector<Info>v;
int main()
{
	int m;
	cin>>m;
	for(int z=0;z<m;z++)
	{
		int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		info.aa=i+1;
		info.bb=1;
		v.push_back(info); 
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[j].aa%i==0) v[j].bb*=(-1);
		}
	}
	int sum=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].bb==-1) sum++;
	}
	cout<<sum<<endl;
	v.clear();
	}
	
	return 0; 
}