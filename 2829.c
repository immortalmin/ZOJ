#include<stdio.h>
int main()
{
	int a[200000],i,n,j=1;
	for(i=1;i<300000;i++)
	{
		if(i%3==0||i%5==0)
		{
			a[j]=i;
			j++;
		}
	}
	while(scanf("%d",&n)==1)
	{
		printf("%d\n",a[n]);
	}
	return 0;
}