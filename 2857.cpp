#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	vector<int>r,g,b;
	int n,m,rr,gg,bb,w=0;
	while(cin>>n>>m)
	{
		r.clear();
		g.clear();
		b.clear();
		w++;
		if(n==0&&m==0) break;
		for(int i=0;i<n*m;i++)
		{
			cin>>rr;
			r.push_back(rr);
		}
		for(int i=0;i<n*m;i++)
		{
			cin>>rr;
			g.push_back(rr);
		}
		for(int i=0;i<n*m;i++)
		{
			cin>>rr;
			b.push_back(rr);
		}
		cout<<"Case "<<w<<":"<<endl;
		for(int i=0;i<n*m;i++)
		{
			cout<<(r[i]+g[i]+b[i])/3;
			if((i+1)%m==0) cout<<endl;
			else cout<<",";
		}
	}
	return 0;
}