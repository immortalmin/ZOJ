#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k,a;
	while(cin>>n)
	{
		k=0;
		if(n==0) break;
		while(n>0)
    	{
		    if(n%2==0)
			{
				n=n/2;
				k++;
			}
		    else break;
    	}
    	a=pow(2,k);
    	cout<<a<<endl;
	}
	return 0;
	
}