#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,ss;
	char a[100];
	while(cin.getline(a,100))
	{
		
		s=a;
		ss="";
		if(s[0]=='#') break;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') ss+="%20";
			else if(s[i]=='!') ss+="%21";
			else if(s[i]=='$') ss+="%24";
			else if(s[i]=='%') ss+="%25";
			else if(s[i]=='(') ss+="%28";
			else if(s[i]==')') ss+="%29";
			else if(s[i]=='*') ss+="%2a";
			else ss+=s[i];
		}
		cout<<ss<<endl;
	}
	return 0;
}