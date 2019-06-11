#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
struct Info
{
	string aa;
	int bb;
}info;
bool myComp(const Info &info1,const Info &info2)
{
	return info1.bb<info2.bb;
}
vector<Info>v;
int main(int argc,char*argv[])
{
	//freopen("1.txt","r",stdin);
	int m,k=0;
	char a[100];
	cin>>m;
	cin.getline(a,100);
	while(cin.getline(a,100))
	{
		int n1,n2;
    	string s;
    	cin>>n1>>n2;
    	for(int i=0;i<n2;i++)
    	{
    		int sum=0;
	     	cin>>s;
	    	info.aa=s;
	    	for(int j=0;j<n1-1;j++)
	     	{
	    		for(int z=j+1;z<n1;z++)
	    		{
			    	if(s[j]>s[z]) sum++;
		    	}
	    	}
	    	info.bb=sum;
	     	v.push_back(info);
     	}
    	sort(v.begin(),v.end(),myComp);
     	for(int i=0;i<n2;i++)
    	{
     		cout<<v[i].aa<<endl;
    	}
     	v.clear();
     	k++;
     	if(k!=m) cout<<endl;
     	if(k==m) break;
    }
    return 0;
}