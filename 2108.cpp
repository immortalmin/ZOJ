#include<iostream>
using namespace std;
int main()
{
	int n,b;
	while(cin>>n)
	{
		if(n==0) break;
		int t=0,a=0;
		for(int i=0;i<n;i++)
		{
			cin>>b;
			if(b>a)
			{
				t=t+(b-a)*6+5;
				a=b;
			}
			else
			{
				t=t+(a-b)*4+5;
				a=b;
			}
		}
		cout<<t<<endl;
	}
	return 0;
}