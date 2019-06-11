#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		int a[100][100],ww=0;
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				v.push_back(a[i][j]);
			}
		}
		for(int i=0;i<v.size()-1;i++)
		{
			//if(ww==1) break;
			for(int j=i+1;j<v.size();j++)
			{
				//if(ww==1) break;
				if(v[i]==v[j])
				{
					//cout<<"No"<<endl;
					ww=1;
					break;
				}
			}
		}
		//sum的初始值
		int sum=0,s=0;
		for(int i=0;i<n;i++) sum+=a[0][i];
		for(int i=0;i<n;i++) s+=a[i][i];
		if(s!=sum)
		{
			//cout<<"No"<<endl;
			ww==1;
		}
		s=0;
		for(int i=0;i<n;i++) s+=a[i][n-1-i];
		if(s!=sum)
		{
			//cout<<"No"<<endl;
			ww=1;
			//break;
		}
		s=0;
		int w=0;
		for(int i=0;i<n;i++)
		{
			//if(w==1) break;
			for(int j=0;j<n;j++) s+=a[i][j];
			if(s!=sum)
			{
				//cout<<"No"<<endl;
				w=1;
				//break;
			}
			s=0;
		}
		for(int i=0;i<n;i++)
		{
			//if(w==1) break;
			for(int j=0;j<n;j++) s+=a[j][i];
			if(s!=sum)
			{
				//cout<<"No"<<endl;
				w=1;
				//break;
			}
			s=0;
		}
		if(ww==0&&w==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		v.clear();
	}
	return 0;
}