#include<stdio.h>
#include<string.h>
int main()
{
	char a[300];
	int l;
	int i,j,k,b,sum;
	while(gets(a))
	{
		if(a[0]=='#')
		{
			break;
		}
		sum=0;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>64&&a[i]<91)
		{
			b=a[i]-64;
			sum+=b*(i+1);
		}
		
	}
	printf("%d\n",sum);
	}
	return 0;
 } 