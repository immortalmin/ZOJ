#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]=='0') break;
		int l=s.size(),a,sum=0;
		for(int i=0;i<s.size();i++)
		{
			a=s[i]-48;
			sum=sum+a*(pow(2,(l-i))-1);
		}
		cout<<sum<<endl;
	}
	return 0;
}