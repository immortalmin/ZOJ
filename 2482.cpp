#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int conv(string s){
	int sum=0;
	for(int i=0;i<8;i++){
		if(s[i]=='1') sum+=pow(2,7-i);
	}
	return sum;
}
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	string s,s1,s2,s3,s4;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>s;
		s1=s.substr(0,8);
		s2=s.substr(8,8);
		s3=s.substr(16,8);
		s4=s.substr(24,8);
		cout<<conv(s1)<<"."<<conv(s2)<<"."<<conv(s3)<<"."<<conv(s4)<<endl;
	}
	return 0;
}