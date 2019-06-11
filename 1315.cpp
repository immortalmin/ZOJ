#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;
struct Info
{
	string aa;
	int bb;
}info;
bool myComp(const Info&info1,const Info&info2)
{
	return info1.bb>info2.bb;
}
vector<string>v;
vector<Info>vv;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,m,k=0;
	string s,ss;
	char a[100];
	while(cin>>n>>m)
	{
		k++;
		for(int i=0;i<n;i++)
    	{
	     	cin>>ss;
	    	v.push_back(ss);
    	}
    	cin.getline(a,100);
    	for(int i=0;i<m;i++)
    	{
	     	cin.getline(a,100);
	    	s=a;
	    	info.aa=s;
	    	for(int j=0;j<s.size();j++)
	    	{
		    	if(s[j]>=65&&s[j]<=90) s[j]=s[j]+32;
	    	}
	    	
	    	ss="";
	    	int sum=0;
	    	for(int j=0;j<s.size();j++)
	    	{
		    	if(s[j]>=97&&s[j]<=122) ss+=s[j];
		    	else if(s[j]<=64||(s[j]>=91&&s[j]<=96)||s[j]>=123)
		    	{
			     	for(int z=0;z<v.size();z++)
					{
					 	if(ss==v[z]) sum++;
					}
			    	ss="";
		    	}
		     	else if(j==s.size()-1)
		    	{
			     	ss+=s[j];
			       	for(int z=0;z<v.size();z++)
					{
					 	if(ss==v[z]) sum++;
					}
			     	ss="";
		    	}
	    	}
	     	
	    	info.bb=sum;
	    	vv.push_back(info);
    	}
    	sort(vv.begin(),vv.end(),myComp);
    	
    	cout<<"Excuse Set #"<<k<<endl;
    	cout<<vv[0].aa<<endl;
    	for(int i=1;i<vv.size();i++)
    	{
    		if(vv[i].bb==vv[0].bb) cout<<vv[i].aa<<endl;
		}
		cout<<endl;
		v.clear();
    	vv.clear();
	}
	return 0;
}