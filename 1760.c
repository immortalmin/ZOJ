#include<stdio.h>
int main()
{
	int a[100],i,j,z,k;
	while(scanf("%d",&a[0])==1)
	{
		if(a[0]==-1) break;
		z=1,k=0;
		while(scanf("%d",&a[z])==1)
	{
		
		if(a[z]==0)
		{
			break;
		}
		z++;
	}
	for(i=0;i<z-1;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(a[i]==a[j]*2||a[i]*2==a[j])
			{
				k++;
			}
		}
	}
	printf("%d\n",k);
	}
	return 0;
}