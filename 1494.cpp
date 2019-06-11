#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a==0&&b==0&&c==0) break;
		int sum=b,t=1;
		while(sum<a)
		{
			sum-=c;
			sum+=b;
			t+=2;
		}
		cout<<t<<endl;
	}
	return 0;
}