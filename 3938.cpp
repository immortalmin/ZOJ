#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
struct Info
{
	int aa;//位置 
	int bb;//值 
}info;
vector<Info>v,vv;
int main()
{
	//freopen("1.txt","r",stdin);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;//1111111
		int a;
		for(int j=0;j<4;j++)
		{
			cin>>a;
			info.aa=j+1;
			info.bb=a;
	    	v.push_back(info);
		}
		if(n==1||n==2)
		{
			info.aa=2;
			info.bb=v[1].bb;
			vv.push_back(info);
		}
		else if(n==3)
		{
			info.aa=3;
			info.bb=v[2].bb;
			vv.push_back(info);
		}
		else if(n==4)
		{
			info.aa=4;
			info.bb=v[3].bb;
			vv.push_back(info);
		}
		v.clear();
		cin>>n;//222222222
		for(int j=0;j<4;j++)
		{
			cin>>a;
			info.aa=j+1;
			info.bb=a;
	    	v.push_back(info);
		}
		if(n==2||n==4)
		{
			info.aa=vv[0].aa;
			info.bb=v[vv[0].aa-1].bb;
			vv.push_back(info);
		}
		else if(n==1)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==4)
				{
					info.aa=ii+1;
					info.bb=4;
					vv.push_back(info);
				}
			}
		}
		else if(n==3)
		{
			info.aa=1;
			info.bb=v[0].bb;
			vv.push_back(info);
		}
		v.clear();
		cin>>n;//33333333
		for(int j=0;j<4;j++)
		{
			cin>>a;
			info.aa=j+1;
			info.bb=a;
	    	v.push_back(info);
		}
		if(n==1)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[1].bb)
				{
					info.aa=ii+1;
					info.bb=vv[1].bb;
					vv.push_back(info);
				}
			}
		}
		else if(n==2)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[0].bb)
				{
					info.aa=ii+1;
					info.bb=vv[0].bb;
					vv.push_back(info);
				}
			}
		}
		else if(n==3)
		{
			info.aa=3;
			info.bb=v[2].bb;
			vv.push_back(info);
		}
		else if(n==4)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==4)
				{
					info.aa=ii+1;
					info.bb=4;
					vv.push_back(info);
				}
			}
		}
		v.clear();
		cin>>n;//4444444444
		for(int j=0;j<4;j++)
		{
			cin>>a;
			info.aa=j+1;
			info.bb=a;
	    	v.push_back(info);
		}
		if(n==3||n==4)
		{
			info.aa=vv[1].aa;
			info.bb=v[vv[1].aa-1].bb;
			vv.push_back(info);
		}
		else if(n==1)
		{
			info.aa=vv[0].aa;
			info.bb=v[vv[0].aa-1].bb;
			vv.push_back(info);
		}
		else if(n==2)
		{
			info.aa=1;
			info.bb=v[0].bb;
			vv.push_back(info);
		}
		v.clear();
		cin>>n;//5555555555
		for(int j=0;j<4;j++)
		{
			cin>>a;
			info.aa=j+1;
			info.bb=a;
	    	v.push_back(info);
		}
		if(n==1)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[0].bb)
				{
					info.aa=ii+1;
					info.bb=vv[0].bb;
					vv.push_back(info);
				}
			}
		}
		else if(n==2)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[1].bb)
				{
					info.aa=ii+1;
					info.bb=vv[1].bb;
					vv.push_back(info);
				}
			}
		}
		else if(n==3)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[3].bb)
				{
					info.aa=ii+1;
					info.bb=vv[3].bb;
					vv.push_back(info);
				}
			}
		}
		else if(n==4)
		{
			for(int ii=0;ii<v.size();ii++)
			{
				if(v[ii].bb==vv[2].bb)
				{
					info.aa=ii+1;
					info.bb=vv[2].bb;
					vv.push_back(info);
				}
			}
		}
		v.clear();
		for(int i=0;i<5;i++)
		{
			cout<<vv[i].aa<<" "<<vv[i].bb<<endl;
		}
		vv.clear();
	}
	return 0;
}