#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	string s;
	int n,a;
	char c;
	while(cin>>n)
	{
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			string ss="";
			for(int j=0;j<s.size();j++)
			{
				if(s[j]!='$'&&s[j]!=','&&s[j]!='.') ss+=s[j];
			}
			int k=1,sum=0;
			for(int j=ss.size()-1;j>=0;j--)
			{
				a=ss[j]-48;
				sum=a*k+sum;
				k*=10;
			}
			v.push_back(sum);
		}
		int ssum=0;
		for(int i=0;i<v.size();i++)
		{
			ssum+=v[i];
		}
		string sss="";
		int k=0,kk=0,kkk=0;
		while(ssum>9)
		{
			a=ssum%10;
			c=a+48;
			ssum=ssum/10;
			sss+=c;
			if(kkk==0) k++;
			else kk++;
			if(k==2&&kkk==0)
			{
				sss+='.';
				kkk=1;
			}
			if(kk==3)
			{
				sss+=',';
				kk=0;
				kkk=2;
			}
		}
		c=ssum+48;
		sss+=c;
		if(k==0) sss+="0.0";
		if(k==1) sss+=".0";
		cout<<"$";
		for(int i=sss.size()-1;i>=0;i--)
		{
			cout<<sss[i];
		}
		cout<<endl;
		v.clear();
	}
	return 0;
}