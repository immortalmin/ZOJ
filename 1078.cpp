#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string> 
#include<map>
#include<queue>
#include<vector>
using namespace std;
bool pal(int n,int x){
	string s="",ss;
	int a;
	while(n){
		a=n%x;
		s+=char(a+48);
		n/=x;
	}
	ss=s;
	reverse(s.begin(),s.end());
	if(s==ss) return true;
	return false;
}
vector<int>v;
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	while(cin>>n&&n){
		v.clear();
		for(int i=2;i<=16;i++){
			if(pal(n,i)) v.push_back(i);
		}
		if(v.size()==0) printf("Number %d is not a palindrom\n",n);
		else{
			printf("Number %d is palindrom in basis",n);
			for(int i=0;i<v.size();i++){
				cout<<" "<<v[i];
			}
			cout<<endl;
		}
	}
	return 0;
}