#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
int main()
{
	int n,a;
	while(cin>>n)
	{
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		int sum=0,l=v.size()-2,aver;
		for(int i=1;i<v.size()-1;i++)
		sum+=v[i];
		aver=sum/l;
		cout<<aver<<endl;
		v.clear();
	}
	return 0;
}