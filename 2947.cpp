#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int nn,mm;
			string s,ss="",sss="";
			cin>>nn;
			for(int j=0;j<nn;j++)
			{
				cin>>s;
				ss+=s[0];
			}
			cin>>mm;
			for(int j=0;j<mm;j++)
			{
				cin>>s;
				sss+=s[0]; 
			}
			if(ss==sss) cout<<"SAME"<<endl;
			else cout<<"DIFFERENT"<<endl;
			ss="",sss="";
		}
	}
	return 0;
}