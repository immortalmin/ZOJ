#include<iostream>
#include<fstream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		v.clear();
		int w=0;
		scanf("%d",&n);
		int a,kk=0;
	   	for(int i=0;i<n;i++)
	   	{
		   	scanf("%d",&a);
		   	if(a==1) kk++;
		   	v.push_back(a);
	   	}
		if(kk<2||(n<10||n>13)) w=1;
		else
		{
		   	sort(v.begin(),v.end());
		   	if(v[0]!=1) w=1;
		   	else
		   	{
		   		for(int i=1;i<n-1;i++)
	         	{
	    	      	if(abs(v[i]-v[i-1])>2||abs(v[i]-v[i+1])>2)
	    	     	{
	    		    	if(i!=n-1&&i-1!=n-1&&i+1!=n-1) w=1;
			    	}
		    	}
			}
	       	
		}
		if(w==1) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}