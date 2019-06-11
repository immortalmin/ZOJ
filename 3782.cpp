#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c,sum;
		char d,dd;
		cin>>a>>d>>b>>dd>>c;
		if((dd=='*'||dd=='/'||dd=='%')&&(d=='+'||d=='-'))
		{
			if(dd=='*') sum=b*c;
			else if(dd=='/') sum=b/c;
			else if(dd=='%') sum=b%c;
			if(d=='+') sum=sum+a;
			else if(d=='-') sum=a-sum;
		}
		else
		{
			if(d=='+') sum=a+b;
			else if(d=='-') sum=a-b;
			else if(d=='*') sum=a*b;
			else if(d=='/') sum=a/b;
			else if(d=='%') sum=a%b;
			if(dd=='+') sum=sum+c;
			else if(dd=='-') sum=sum-c;
			else if(dd=='*') sum=sum*c;
			else if(dd=='/') sum=sum/c;
			else if(dd=='%') sum=sum%c;
		}
		cout<<sum<<endl;
	}
	return 0;
}