#include<stdio.h>
int main()
{
	int a[100],n,i,j,k=0,sum,aver,s;
	while(scanf("%d",&n)==1)
	{
		k++,sum=0,s=0;
		if(n==0) break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		aver=sum/n;
		for(i=0;i<n;i++)
		{
			if(aver>a[i])
			{
				s+=aver-a[i];
			}
			else
			{
				s+=a[i]-aver;
			}
		}
		printf("Set #%d\n",k);
		printf("The minimum number of moves is %d.\n\n",s/2);
	}
	return 0;
}