#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
vector<int>v,vv;
int main()
{
	//freopen("1.txt","r",stdin);
	int m,n;
	while(cin>>m)
	{
		for(int ii=0;ii<m;ii++)
	{
		cin>>n;
		int a;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			cin>>a;
			vv.push_back(a);
		}
		int w=0,ww=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]!=vv[i])
			{
				w=1;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]!=vv[n-1-i])
			{
				ww=1;
				break;
			}
		}
		if(w==0&&ww==0) cout<<"both"<<endl;
		else if(w==1&&ww==0) cout<<"stack"<<endl;
		else if(w==0&&ww==1) cout<<"queue"<<endl;
		else cout<<"neither"<<endl;
		v.clear();
		vv.clear();
	}
	}
	
	return 0;
}