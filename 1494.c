#include<stdio.h>
int main()
{
	int n,u,d,a,t;
	while(scanf("%d%d%d",&n,&u,&d)==3)
	{
		if(n==0&&u==0&&d==0)
		{
			break;
		}
		a=u,t=1;
    	while(a<n)
    	{
	    	a=a-d;
	     	a=a+u;
	    	t+=2;
    	}
    	printf("%d\n",t);
	}
	return 0;
}