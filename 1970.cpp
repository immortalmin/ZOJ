#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(int argc,char*argv[])
{
	string s,ss;
	while(cin>>s>>ss)
	{
		int j=0;
		if(s=="EOF") break;
		for(int i=0;i<ss.size();i++)
	{
		if(s[j]==ss[i])
		{
			if(j==s.size()-1)
			{
				cout<<"Yes"<<endl;
				break;
			}
			else
			j++;
		}
		else if(i==ss.size()-1)
		{
			cout<<"No"<<endl;
			break;
		}
	}
	}
	
	return 0;
}