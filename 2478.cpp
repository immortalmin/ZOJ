#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		char a=s[0];
		int k=1;
		for(int j=1;j<s.size();j++)
		{
			if(s[j]==a) k++;
			else
			{
				if(k==1) cout<<a;
				else cout<<k<<a;
				a=s[j];
				k=1;
			}
		}
		if(k==1) cout<<a<<endl;
		else cout<<k<<a<<endl;
	}
	return 0;
}