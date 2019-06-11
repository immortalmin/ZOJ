#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	string s,ss;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s>>ss;
		int sum,sum1=0,sum2=0,a;
		for(int j=s.size()-1;j>=0;j--)
		{
			a=s[j]-48;
			sum1=sum1*10+a;
		}
		for(int j=ss.size()-1;j>=0;j--)
		{
			a=ss[j]-48;
			sum2=sum2*10+a;
		}
		sum=sum1+sum2;
		int su=0;
		while(sum>9)
		{
			a=sum%10;
			su=su*10+a;
			sum=sum/10;
		}
		su=su*10+sum;
		cout<<su<<endl;
	}
	return 0;
}