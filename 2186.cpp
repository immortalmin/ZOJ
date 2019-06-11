#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	for(int i=0;i<3;i++)
	{
		if(a[i]<=168)
		{
			printf("CRASH %d\n",a[i]);
			break;
		}
		else if(i==2) printf("NO CRASH\n");
	}
	return 0;
}