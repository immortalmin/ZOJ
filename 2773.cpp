#include<iostream>
#include<fstream>
#include<vector>
#include<cstdio>
using namespace std;
vector<int>v;
int main()
{
	//freopen("1.txt","r",stdin);
	int s=0;
	for(int i=1;i<=400;i++)
	{
		int sum=0;
		for(int j=1;j<=i;j++)
		{
			sum+=j;
		}
		sum=sum*(i-1);
		s+=sum;
		v.push_back(s);
    }
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
    	int a;
    	cin>>a;
    	printf("%d %d %d\n",j+1,a,v[a]);
	}
	return 0;
}