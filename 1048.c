#include<stdio.h>
main()
{
	int i;
	float sum=0,a[12],aver;
	for(i=0;i<12;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<12;i++)
	{
		sum+=a[i];
	}
	aver=sum/12;
	printf("$%.2f",aver);
	return 0;
}