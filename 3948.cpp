#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x,y,a,b,sum=0;
		scanf("%d%d%d%d",&x,&y,&a,&b);//cin>>x>>y>>a>>b;
		if((x==1||y==1)&&a!=0&&b!=0) printf("INF\n");
		else if(x==2&&y==2&&(a>=2||b>=2)) printf("INF\n");//cout<<"INF"<<endl;
		else
		{
			while(a>=x||b>=y)
	    	{
		    	if(a>=x) a-=x;
		    	else if(b>=y) b-=y;
		    	a++;
		    	b++;
		    	sum++;
			}
			printf("%d\n",sum);//cout<<sum<<endl;
		}
	}
	return 0;
}