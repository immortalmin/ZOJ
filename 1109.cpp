#include<fstream>#include<iostream>#include<string>#include<map>using namespace std;int main(){	string s;	char ss[100],s1[100],s2[100];	int x,y;	map<string,string>m;	map<string,string>::iterator p;	while(gets(ss))	{		s=ss;		if(s=="") break;		else		{			sscanf(s.c_str(),"%s %s",s1,s2);			m[s2]=s1;		}	}	while(gets(ss))	{		s=ss;		p=m.find(s);		if(p!=m.end()) cout<<m[s]<<endl;		else cout<<"eh"<<endl;	}	return 0;}