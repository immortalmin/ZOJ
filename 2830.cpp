#include<iostream>
using namespace std;
int main()
{
	long long int n;
	while(cin>>n)
	{
		if(n==0) continue;
		long long int sum=0,a,b;
		if(n>2)
		{
			while(n>2)
		{
			a=n/3;
			sum+=a;
			if(a>1) n=n%3+a;
			else n=n%3;
		}
		if(n==2||n==1) sum++;
		}
		else if(n==2) sum++;
		cout<<sum<<endl;
	}
	return 0;
}