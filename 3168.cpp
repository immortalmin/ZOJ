#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<char>v;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int i=0;i<s.size();i++)
	{
		if(s[i]=='Z') v.push_back(s[i]);
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='O') v.push_back(s[i]);
	}
	for(int i=0;i<s.size();i++) if(s[i]=='J') v.push_back(s[i]);
	for(int i=0;i<s.size();i++) if(s[i]=='7') v.push_back(s[i]);
	for(int i=0;i<s.size();i++) if(s[i]!='Z'&&s[i]!='O'&&s[i]!='J'&&s[i]!='7') v.push_back(s[i]);
	for(int i=0;i<v.size();i++) cout<<v[i];
	cout<<endl;
	v.clear();
	}
	
	return 0;
}