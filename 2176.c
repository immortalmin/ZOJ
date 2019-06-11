#include<stdio.h>
int main()
{
	int n,a[100],b[100],i,j,k,s,sum;
	while(scanf("%d",&n)==1)
	{
		if(n==-1)
		{
			break;
		}
		s=0,sum=0;
		for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i]*(b[i]-s);
		s=b[i];
	}
	printf("%d miles\n",sum);
	}
	return 0;
}