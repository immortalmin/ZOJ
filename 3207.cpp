#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
vector<string>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		v.push_back(s);
	}
	int m,a;
	cin>>m;
	while(m--)
	{
		cin>>a;
		int sum=0;
		for(int i=0;i<a;i++)
		{
			cin>>s;
			for(int j=0;j<v.size();j++)
			{
				if(s==v[j]) sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}