#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	string s;
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>s;
			int sum=0;
			for(int j=0;j<s.size();j++)
			{
				if((s[j]=='d'&&s[j+1]=='o'&&s[j+2]=='g')||(s[j]=='c'&&s[j+1]=='a'&&s[j+2]=='t'))
				{
					sum++;
					j+=2;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}