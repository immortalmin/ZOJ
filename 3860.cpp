#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int T,n,a;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int aa,bb,cc;
		cin>>aa>>bb;
		for(int i=2;i<n;i++)
		{
			cin>>a;
			if(a==aa&&a==bb) continue;
			else if(a==bb&&a!=aa) cc=aa;
			else if(a==aa&&a!=bb) cc=bb;
			else cc=a;
		}
		cout<<cc<<endl;
	}
	return 0;
}