#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s.size()>1)
		{
			char a=s[0];
		int k=1;
		for(int i=1;i<s.size();i++)
		{
			if(s[i]==a) k++;
			else
			{
				cout<<k<<a;
				k=1;
				a=s[i];
			}
			if(i==s.size()-1) cout<<k<<a<<endl;
		}
		}
		else
		{
			cout<<"1"<<s<<endl;
		}
	}
	return 0;
}