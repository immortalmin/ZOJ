#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
vector<string>v;
int main()
{
	//freopen("1.txt","r",stdin);
	string s,ss;
	int k=0;
	while(cin>>s)
	{
		k++;
		v.push_back(s);
		while(cin>>ss)
		{
			if(ss[0]=='9') break;
			v.push_back(ss);
		}
		int w=0;
		for(int i=0;i<v.size()-1;i++)
		{
			for(int j=i+1;j<v.size();j++)
			{
				for(int z=0;;z++)
				{
					if(v[i][z]!=v[j][z]) break;
					else if(z==v[i].size()-1||z==v[j].size()-1) w=1;
				}
				
			}
		}
		
		if(w==1) cout<<"Set "<<k<<" is not immediately decodable"<<endl;
		else cout<<"Set "<<k<<" is immediately decodable"<<endl;
		v.clear();
	}
	
	return 0;
}