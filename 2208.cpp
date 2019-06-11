#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	string s;
	char a[202][202];
	while(cin>>n>>s)
	{
		if(n==0) break;
		int k=0,kk=0,kkk=0,w=0,w1=0;
		for(int i=0;;i++)
		{
			if(w==1) break;
			kk++;
			if(kkk==0)
			{
				for(int j=0;j<n;j++)
		     	{
			    	if(w1==0) a[i][j]=s[k];
			    	else a[i][j]=0;
			     	k++;
			     	if(k==s.size())
			    	{
				    	w=1;
				    	if(k%n!=0) w1=1;
			    	}
		    	}
		    	kkk=1;
			}
			else
			{
				for(int j=n-1;j>=0;j--)
		    	{
		     		if(w1==0) a[i][j]=s[k];
			    	else a[i][j]='0';
			     	k++;
			     	if(k==s.size())
			    	{
				    	w=1;
				    	if(k%n!=0) w1=1;
			    	}
		    	}
		    	kkk=0;
			}
		}
		int m=0,ww=0;
		for(int j=0;j<n;j++)
		{
			if(ww==1) break;
			for(int i=0;i<kk;i++)
			{
				if(a[i][j]=='0') continue;
				cout<<a[i][j];
				m++;
				if(m==s.size())
				{
					ww=1;
					break;
				}
			}	
		}
		cout<<endl;
	}
	return 0;
}