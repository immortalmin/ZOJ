#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc,char*argv[])
{
	double sum=1,s;
	printf("n e\n");
	printf("- -----------\n");
	cout<<"0"<<" "<<sum<<endl;
	cout<<"1"<<" "<<"2"<<endl;
	cout<<"2"<<" "<<"2.5"<<endl;
	sum=2.5;
    for(int i=3;i<10;i++)
    {
    	s=1;
		for(int j=i;j>=1;j--)
    	{
    		s*=j;
		}
		sum+=(1/s);
		printf("%d %.9lf\n",i,sum);
		//cout<<i<<" "<<sum<<endl;
	}
	return 0;
}