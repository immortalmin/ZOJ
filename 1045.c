#include<stdio.h>
int main()
{
	
	float a,m,i;
	while(scanf("%f",&a)==1)
	{
		if(a==0)
		{
			break;
		}
		m=2,i=0;
		while(i<a)
	{
		i+=(1/m);
		m++;
	}
	printf("%.0f card(s)\n",m-2);
	}
	return 0;
}