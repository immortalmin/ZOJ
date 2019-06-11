#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double sum1=0,sum2=0;
		int a,b,c,sum;
		if(n==0) break;
		if(n<=4)
		{
			cout<<"10"<<endl;
			continue;
		}
		else if(n<=8)
		{
			a=n%4;
			if(a!=0) sum=a*2+10;
			else sum=18;
			printf("%d\n",sum);
			continue;
		}
		else if(n>8&&n<=16)
		{
			a=n/8;
			b=n%8;
			sum1=a*18;
			if(b<=4&&b!=0) sum1+=10;
			else if(b!=0)
			{
				c=b%4;
				sum1=sum1+10+c*2;
			}
			sum2=(n-8)*2.4+18;
			if(sum1<sum2)
			{
				sum=sum1;
				if(sum==sum1) printf("%d\n",sum);
				else printf("%.1f\n",sum1);
			}
			else
			{
				sum=sum2;
				if(sum==sum2) printf("%d\n",sum);
				else printf("%.1f\n",sum2);
			}
			continue;
		}
		else if(n>16)
		{
			a=n/16;
			b=n%16;
			sum1=36*a;//感觉会有漏洞，留心！！ 
			if(b<=4) sum1=sum1+b*2.4;
			else if(b>4&&b<=8)//4-8
			{
				if(b%4!=0) sum1=sum1+10+2*(b%4);
				else sum1=sum1+18;
			}
			else//8-16,b>8&&b<16
			{
				
				c=b-8;
				if(c<=4)
				{
					if(c!=0) sum1=sum1+18+c*2.4;
					else sum1=sum1+18+9.6;
				}
				else
				{
					sum1=sum1+18+10+(c-4)*2;
				}
			}
			sum=sum1;
			if(sum==sum1) printf("%d\n",sum);
			else printf("%.1f\n",sum1);
			continue;
		}
	}
	return 0;
}