#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	string s;
	while(cin>>s)
	{
		if(s=="end") break;
		int w=0,ww=0,www=0,l=s.size();
		if(l==1)
		{
			if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u') w=1;
		}
		else if(l==2)
		{
			if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[1]=='a'||s[1]=='e'||s[1]=='i'||s[1]=='o'||s[1]=='u') w=1;
			if(s[0]==s[1])
			{
				if(s[0]!='e'&&s[0]!='o') www=1;
			}
		}
		else
		{
			for(int i=0;i<s.size()-2;i++)
	    	{
			    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u'||s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u') w=1;
				if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')&&(s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u'))
		    	{
		    		ww=1;
			    	break;
		     	}
		    	else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')&&(s[i+2]!='a'&&s[i+2]!='e'&&s[i+2]!='i'&&s[i+2]!='o'&&s[i+2]!='u'))
		    	{
			    	ww=1;
			    	break;
		    	}
		    	if(s[i]==s[i+1])
		    	{
			    	if(s[i]!='e'&&s[i]!='o') www=1;
		     	}
		     	if(s[i+1]==s[i+2])
		     	{
		     		if(s[i+1]!='e'&&s[i+1]!='o') www=1;
				 }
	    	}
		}
		if(w==1&&ww==0&&www==0) cout<<"<"<<s<<"> is acceptable."<<endl;
		else cout<<"<"<<s<<"> is not acceptable."<<endl;
	}
	return 0;
}