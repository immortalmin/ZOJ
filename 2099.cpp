#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	freopen("1.txt","r",stdin);
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0) break;
		int maxx=a,maxy=b,minx=a,miny=b;
		while(cin>>a>>b)
		{
			if(a==0&&b==0) break;
			if(a>maxx) maxx=a;
			if(a<minx) minx=a;
			if(b>maxy) maxy=b;
			if(b<miny) miny=b;
		}
		cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy<<endl;
	}
	return 0;
}