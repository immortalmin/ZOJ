#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int a,b,c,sa,sb;
		cin>>c>>a>>b;
		if(c>a) sa=c-a;
		else sa=a-c;
		if(c>b) sb=c-b;
		else sb=b-c;
		if(sa<sb) cout<<"A"<<endl;
		else cout<<"B"<<endl;
		}
	}
	return 0;
}