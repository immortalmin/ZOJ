#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string>v;
int main(int argc,char*argv[])
{
	int n,m,k=0;
	cin>>m;
	char a[100];
	cin.getline(a,100);
	cin.getline(a,100);
	while(cin>>n)
	{
		k++;
		if(k!=1) cout<<endl;
		cin.getline(a,100);
	for(int z=0;z<n;z++)
	{
		string s,ss="";
	
	cin.getline(a,100);
	s=a;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]!=' '&&i!=0)
		{
			ss+=s[i];
		}
		else if(s[i]==' ')
		{
			v.push_back(ss);
			ss="";
		}
		else
		{
			ss+=s[i];
			v.push_back(ss);
		}
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		if(i!=v.size()-1) cout<<" ";
		cout<<v[i];
	}
	cout<<endl;
	v.clear();
	}
	if(k==m) break;
	}
	
	
	return 0;
}