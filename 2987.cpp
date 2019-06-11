#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	cin>>n;
	string s;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a>>s;
		cout<<i+1<<" ";
		for(int j=0;j<s.size();j++)
		{
			if(j==a-1) continue;
			else cout<<s[j];
		}
		cout<<endl;
	}
	return 0;
}