#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
vector<int>v;
bool myComp1(const int&a,const int&b)
{
	return a<b;
}
bool myComp2(const int&a,const int&b)
{
	return a>b;
}
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int m,a;
			string s;
			cin>>s>>m;
			for(int i=0;i<m;i++)
			{
				cin>>a;
				v.push_back(a);
			}
			if(s=="Faster") sort(v.begin(),v.end(),myComp1);
			else sort(v.begin(),v.end(),myComp2);
			cout<<v[0]<<endl;
			v.clear();
		}
	}
	return 0;
}