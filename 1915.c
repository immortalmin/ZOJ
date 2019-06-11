#include<stdio.h>
main()
{
	int n,a[2000],i,j,k,N,M=0;
	float sum,aver,s,m;
	scanf("%d",&N);
	while(scanf("%d",&n)==1)
	{
		M++;
		k=0,sum=0;
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>aver) k++;
	}
	m=n;
	s=100*k/m;
	printf("%.3f%%\n",s);
	if(M==N) break;
	}
	return 0;
 } 