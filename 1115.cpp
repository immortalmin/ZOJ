#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]=='0'&&s.size()==1) break;
		int sum=0,a;
    	for(int i=0;i<s.size();i++)
     	{
     		sum+=(s[i]-48);
    	}
    	while(sum>=10)
    	{
	    	int ss=0;
	    	while(sum>=10)
         	{
	        	a=sum%10;
	         	ss+=a;
	        	sum/=10;
         	}
        	sum=ss+sum;
    	}
    	cout<<sum<<endl;
	}
	return 0;
}