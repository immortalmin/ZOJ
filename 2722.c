#include<stdio.h>
int main()
{
	long long int n,k;
	int i;
	while(scanf("%lld",&n)==1)
	{
		if(n==0) break;
		k=0;
		while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=n/2+1;
		}
		k++;
	}
	printf("%lld\n",k);
	}
	return 0;
}