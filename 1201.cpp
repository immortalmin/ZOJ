#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<map>
#include<queue>
#include<vector>
#include<string.h>
#include<stdlib.h>
using namespace std;
int n; 
void P(string s){
	int a,sum;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=0;j<s.size();j++){
			a=s[j]-48;
			if(a>i) sum++;
			if(a==i) break;
		}
		if(i!=1) cout<<" ";
		cout<<sum;
	}
	cout<<endl;
	return ;
}
void I(string s){
	string ss="";
	char num;
	int index;
	for(int i=s.size()-1;i>=0;i--){
		num=48+i+1;
		index=s[i]-48;
		ss=ss.insert(index,1,num);
	}
	for(int i=0;i<ss.size();i++){
		if(i!=0) cout<<" ";
		cout<<int(ss[i]-48);
	} 
	cout<<endl;
	return ;
	
	
}
int main(){
//	freopen("1.txt","r",stdin);
	char c;
	while(cin>>n&&n){
		string s="";
		int a;
		cin>>c;
		for(int i=0;i<n;i++){
			cin>>a;
			s+=char(48+a);
		}
		if(c=='P'){
			P(s);
		}else{
			I(s);
		}
	}
	return 0;
}
