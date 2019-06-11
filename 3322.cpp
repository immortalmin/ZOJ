#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c,aa,bb,cc;
		cin>>a>>b>>c>>aa>>bb>>cc;
		if(a<aa) cout<<"javaman"<<endl;
		else if(a>aa) cout<<"cpcs"<<endl;
		else
		{
			if(b<bb) cout<<"javaman"<<endl;
			else if(b>bb) cout<<"cpcs"<<endl;
			else
			{
				if(c<cc) cout<<"javaman"<<endl;
				else if(c>cc) cout<<"cpcs"<<endl;
				else cout<<"same"<<endl;
			}
		}
	}
	return 0;
}