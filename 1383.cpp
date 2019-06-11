#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,k=0;
		cin>>a;
		while(a>1)
		{
			
			if(a%2==1) cout<<k<<" ";//printf("%d ",k);
		    a/=2;
		    k++;
		}
		if(a==1) cout<<k<<endl;
	}
	return 0;
}