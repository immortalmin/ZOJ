#include<stdio.h>
int main()
{
	int i,j,k=0;
	float a,b,c;
	while(scanf("%f%f%f",&a,&b,&c)==3)
	{
		if(a==0&&b==0&&c==0)
		{
			break;
		}
		k++;
		printf("Triangle #%d\n",k);
		if(a==-1)
	{
		
		if(b>=c)
		{
			printf("Impossible.\n");
		}
		else
		{
			a=sqrt(c*c-b*b);
			if(a+b<=c)
			{
				printf("Impossible.\n");
			}
			else
			{
				printf("a = %.3f\n",a);
			}
		}
	}
	if(b==-1)
	{
		if(a>=c)
		{
			printf("Impossible.\n");
		}
		else
		{
			b=sqrt(c*c-a*a);
			if(a+b<=c)
			{
				printf("Impossible.\n");
			}
			else
			{
				printf("b = %.3f\n",b);
			}
		}
	}
	if(c==-1)
	{
		c=sqrt(a*a+b*b);
		if(a+b<=c)
		{
			printf("Impossible.\n");
		}
		else
		{
			printf("c = %.3f\n",c);
		}
	}
	printf("\n");
	}
	return 0;
}