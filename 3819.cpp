#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--)
	{
		int a,s1=0,s2=0;
		double n,m,aver1,aver2;
		int aa,bb;
		cin>>n>>m;
		for(int i=0;i<n-1;i++)
		{
			cin>>a;
			s1+=a;
		}
		aver1=s1/(n-1);
		for(int i=0;i<m;i++)
		{
			cin>>a;
			s2+=a;
		}
		aver2=s2/m;
		double t;
		if(aver1>aver2)
		{
			t=aver1;
			aver1=aver2;
			aver2=t;
		}
		aa=aver1+1;
		bb=aver2;
		if(bb==aver2) bb-=1; 
		cout<<aa<<" "<<bb<<endl;
	}
	return 0;
}