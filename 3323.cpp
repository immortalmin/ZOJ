#include<iostream>
#include<string>
#include<vector> 
#include<cstdio>
using namespace std;
vector<char>v;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s,ss="";
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]<'0'||s[j]>'9')
			{
				ss+=s[j];
			}
		}
		cout<<ss<<endl; 
	}
	return 0;
}