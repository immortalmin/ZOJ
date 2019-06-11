#include<iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int m,a,b,c,d;
		cin>>m;
		a=m/25;
		m=m-a*25;
		b=m/10;
		m-=b*10;
		c=m/5;
		d=m-c*5;
		cout<<i+1<<" "<<a<<" QUARTER(S), "<<b<<" DIME(S), "<<c<<" NICKEL(S), "<<d<<" PENNY(S)"<<endl; 
	}
	return 0;
}