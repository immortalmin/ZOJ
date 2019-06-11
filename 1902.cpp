#include<iostream>
#include<cstring>
#include<string> 
#include<map>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
map<string,int>mm;
int main(){
//	freopen("1.txt","r",stdin);
	int n,m,a;
	cin>>n>>m;
	string s,ss;
	mm.clear();
	for(int i=0;i<n;i++){
		cin>>s>>a;
		mm[s]=a;
	}
	getline(cin,ss);
	for(int z=0;z<m;z++){
		long long int sum=0;
		while(getline(cin,s)){
			if(s==".") break;
			string s2="";
			for(int i=0;i<s.size();i++){
				if(s[i]!=' ') s2+=s[i];
				else{
					sum+=mm[s2];
					s2="";
				}
			}
			sum+=mm[s2];
		}
		cout<<sum<<endl;
	}
	return 0;
}