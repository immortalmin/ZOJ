#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,l,k=0;
	char a[100];
	scanf("%d",&n);
	while(scanf("%s",&a)==1)
	{
		k++;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='Z')
			{
				a[i]='A';
			}
			else
			{
				a[i]=a[i]+1;
			}
			
		}
		printf("String #%d\n",k);
		printf("%s\n\n",a);
		
		if(k==n)
		{
			break;
		}
		
	}
 } 