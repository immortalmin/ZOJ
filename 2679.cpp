#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	while(n--)
	{
		int a,b,c,d,e,w=0;
		cin>>m>>b>>c>>d;
		for(int i=9;i>0;i--)
		{
			if(w==1) break;
			for(int j=9;j>=0;j--)
			{
				if((i*10000+b*1000+c*100+d*10+j)%m==0)
				{
					cout<<i<<" "<<j<<" "<<(i*10000+b*1000+c*100+d*10+j)/m<<endl;
					w=1;
					break;
				}
				else if(i==1&&j==0) cout<<"0"<<endl;
			}
		}
	}
	return 0;
}