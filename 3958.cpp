#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,a,s1=0,s2=0;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			if(a==1) s1++;
			if(a==2) s2++;
			if(a==3||a==4) continue; 
		}
		if(s1>s2) cout<<"Kobayashi"<<endl;
		else if(s1<s2) cout<<"Tohru"<<endl;
		else cout<<"Draw"<<endl;
	}
	return 0;
}