#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	int t[12]={3,2,1,0,11,10,9,8,7,6,5,4};
	int n,a;
	while(scanf("%d",&n)==1)
	{
		if(n==-1) break;
		if(n%30==0)
		{
			a=n/30;
			printf("Exactly %d o'clock\n",t[a]);
		}
		else
		{
			a=n/30;
			printf("Between %d o'clock and %d o'clock\n",t[a+1],t[a]);
		}
	}
	return 0;
}