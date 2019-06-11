#include<stdio.h>
int main()
{
	int n,a,b,c;
	while(scanf("%d",&n)==1)
	{
		a=n/100;
		b=n/10%10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}