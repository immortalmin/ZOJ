#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char a[100];
	int n;
	cin>>n;
	cin.getline(a,100);
	for(int i=0;i<n;i++)
	{
		cin.getline(a,100);
		s=a;
		for(int i=s.size()-1;i>=0;i--)
		cout<<s[i];
		cout<<endl;
	}
	return 0;
}