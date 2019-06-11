#include<stdio.h>
int main()
{
	int n,a[100],i,j,k=0,s,sum;
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		s=0,sum=0;
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s<a[i])
		{
			sum+=(a[i]-s)*6+5;
			s=a[i];
		}
		else
		{
			sum+=(s-a[i])*4+5;
			s=a[i];
		}
	}
	printf("%d\n",sum);
	}
	return 0;
}