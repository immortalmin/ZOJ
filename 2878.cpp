#include<iostream>
#include<fstream>
#include<set>
#include<vector>
using namespace std;
set<int>s;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,m,k=0;
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>a;
			s.insert(a);
		}
		set<int>::iterator it;
		for(it=s.begin();it!=s.end();it++)
		{
			v.push_back(*it);
			k++;
		}
		a=v[0];
		b=v[k-1];
		cout<<(b-a)*2<<endl;
		v.clear();
		s.clear();
	}
	return 0;
}