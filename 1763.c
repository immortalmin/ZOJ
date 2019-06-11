#include<stdio.h>
int main()
{
	float a[100],b[100];
	int i,j,z=0,k=0;
	while(scanf("%f",&a[z])==1)
	{
		if(a[z]==999) break;
		z++;
	}
	for(i=1;i<z;i++)
	{
		b[k]=a[i]-a[i-1];
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%.2f\n",b[i]);
	}
	printf("End of Output\n");
	return 0;
}