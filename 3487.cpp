#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{
		int a;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a/10%10==1) printf("%dth\n",a);
			else if(a%10==1) printf("%dst\n",a);
			else if(a%10==2) printf("%dnd\n",a);
			else if(a%10==3) printf("%drd\n",a);
			else printf("%dth\n",a);
		}
	
	}
	return 0;	
}