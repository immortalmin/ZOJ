#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
struct Info
{
	string name;
	string cla;
	int num;
}info;
bool myComp(const Info&info1,const Info&info2)
{
	return info1.num>info2.num;
}
vector<Info>v;
int main(int argc,char*argv[])
{
	//freopen("1.txt","r",stdin);
	int n,m;
	string s,ss;
	char a[100];
	while(cin>>n)
	{
		cin.getline(a,100); 
	for(int i=0;i<n;i++)
	{
		cin.getline(a,100);
		ss=a;
		info.name=ss;
		cin.getline(a,100);
		ss=a;
		info.cla=ss;
		info.num=0;
		v.push_back(info);
	}
	cin>>m;
	cin.getline(a,100);
    	for(int i=0;i<m;i++)
       	{
	     	cin.getline(a,100);
	    	ss=a;
	     	for(int j=0;j<v.size();j++)
	     	{
	     		if(ss==v[j].name) v[j].num++;
	     	}
     	}
    	sort(v.begin(),v.end(),myComp);
    	//for(int i=0;i<v.size();i++) cout<<v[i].num<<" ";
    	if(v[0].num==v[1].num) cout<<"tie"<<endl;
    	else cout<<v[0].cla<<endl;
    	v.clear();
	}
	
	
	return 0;
}