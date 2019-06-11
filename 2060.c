#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{
		if((n+2)%4==0)
    	printf("yes\n");
    	else
	    printf("no\n");
  	}
	return 0;
}