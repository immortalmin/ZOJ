#include<iostream>
#include<set>
#include<fstream>
#include<algorithm>
#include<cstdio>
using namespace std;
set<int>s;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			s.insert(a);
		}
		set<int>::iterator it;
		for(it=s.begin();it!=s.end();it++)
		{
			if(it!=s.begin()) printf(" ");
			cout<<*it;
		}
		printf("\n");
		s.clear();
	}
	return 0;
}