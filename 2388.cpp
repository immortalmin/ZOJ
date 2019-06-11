#include<iostream>
using namespace std;
int main()
{
	int n,h,c,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>h>>c;
		if(h<c||h<0||c<0||(h+c)%2==1) cout<<"impossible"<<endl;
		else
		{
			a=(h+c)/2;
	     	b=h-a;
	    	cout<<a<<" "<<b<<endl;
		}
		
	}
	return 0;
}