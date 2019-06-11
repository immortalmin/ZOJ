#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
vector<string>v;
int main()
{
	int n,a;
	while(cin>>n)
	{
		while(n--)
	{
		cin>>a;
		a=a%12;
		if(a==1) printf("Rabbit\n");
		if(a==2) printf("Tiger\n");
		if(a==3) printf("Ox\n");
		if(a==4) printf("Rat\n");
		if(a==5) printf("Pig\n");
		if(a==6) printf("Dog\n");
		if(a==7) printf("Rooster\n");
		if(a==8) printf("Monkey\n");
		if(a==9) printf("Ram\n");
		if(a==10) printf("Horse\n");
		if(a==11) printf("Snake\n");
		if(a==0) printf("Dragon\n");
	}
	}
	
	return 0;
}