#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
vector<int>v,vv,v3;
int main()
{
	//freopen("1.txt","r",stdin);
	string s,ss;
	while(cin>>s>>ss)
	{
		v.clear();
		vv.clear();
		v3.clear();
		for(int i=s.size()-1;i>=0;i--)
		{
			int a;
			if(s[i]>='0'&&s[i]<='9')
			{
				a=s[i]-48;
				v.push_back(a);
			}
			if(s[i]>='a'&&s[i]<='j')
			{
				a=s[i]-87;
				v.push_back(a);
			}
		}
		for(int i=ss.size()-1;i>=0;i--)
		{
			int a;
			if(ss[i]>='0'&&ss[i]<='9')
			{
				a=ss[i]-48;
				vv.push_back(a);
			}
			if(ss[i]>='a'&&ss[i]<='j')
			{
				a=ss[i]-87;
				vv.push_back(a);
			}
		}//
		int sum,k=0,b;
		if(v.size()<vv.size())
		{
			for(int i=0;i<vv.size();i++)
	    	{
		    	if(i<v.size()) sum=v[i]+vv[i]+k;
		    	else sum=vv[i]+k;
		    	b=sum%20;
		    	k=sum/20;
		    	v3.push_back(b);
	    	}
	    	if(k>0) v3.push_back(k);
		}
		else
		{
			for(int i=0;i<v.size();i++)
	    	{
		    	if(i<vv.size()) sum=vv[i]+v[i]+k;
		    	else sum=v[i]+k;
		    	b=sum%20;
		    	k=sum/20;
		    	v3.push_back(b);
	    	}
	    	if(k>0) v3.push_back(k);
		}
		char c;
		for(int i=v3.size()-1;i>=0;i--)
		{
			if(v3[i]>9)
			{
				c=v3[i]+87;
				cout<<c;
			}
			else cout<<v3[i];
		}
		cout<<endl;
	}
	return 0;
}