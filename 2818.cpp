#include<iostream>
#include<cmath>
using namespace std;
int main(int argc,char*argv[])
{
	long long int b,n,a,cha,sum,i;
	while(cin>>b>>n)
	{
		if(b==0&&n==0) break;
		int k=100000000;
		for(i=1;;i++)
		{
			sum=pow(i,n);
			sum>b?cha=sum-b:cha=b-sum;
			if(cha<k) k=cha;
			else break;
		}
		cout<<i-1<<endl;
	}
	return 0;
}