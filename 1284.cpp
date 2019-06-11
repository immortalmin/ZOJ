#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n,k=0;
	while(cin>>n)
	{
		k++;
		if(k==1) printf("PERFECTION OUTPUT\n");
		if(n==0)
		{
			printf("END OF OUTPUT\n");
			break;
		}
		int sum=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0) sum+=i;
		}
		if(sum==n) printf("%5d  PERFECT\n",n);
		else if(sum<n) printf("%5d  DEFICIENT\n",n);
		else printf("%5d  ABUNDANT\n",n);
	}
}