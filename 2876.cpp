#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	vector<string>v;
	char ch[10];
	string s;
	int n;
	cin>>n;
	int i,j;
	while(cin>>n)
	{
		v.clear();
		for(i=0;i<n;i++)
		{
			scanf("%s",&ch);
			s=ch;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++)
		{
			if(v[i+1].find(v[i])==0)
			{
				printf("NO\n");
				goto RL;
			}
		}
		printf("YES\n");
	RL:
		 continue;
	}
	return 0;
}
