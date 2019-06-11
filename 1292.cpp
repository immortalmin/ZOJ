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
string removezero(string s){
	int flag=0;
	string ss="";
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'&&flag==0) continue;
		flag=1;
		ss+=s[i];
	}
	return ss;
}
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	string s[105],ss;
	int len[105];
	for(int z=0;z<T;z++){
		int k=0;
		while(cin>>s[k]){
			if(s[k][0]=='0'&&s[k].size()==1) break;
			reverse(s[k].begin(),s[k].end());
			len[k]=s[k].size();
			k++;
		}
		string res="";
		int sum=0,a;
		for(int i=0;;i++){//遍历下标 
			int flag=0;
			for(int j=0;j<k;j++){//遍历每个字符串 
				if(i>len[j]-1) continue;
				flag=1;
				sum+=int(s[j][i]-48);
			}
			if(flag==0){
				while(sum){
					a=sum%10;
					res+=char(a+48);
					sum/=10;
				}
				break;
			}else{
				a=sum%10;
				res+=char(a+48);
				sum/=10;
			}
			
		}
		reverse(res.begin(),res.end());
		if(z!=0) cout<<endl;
		cout<<removezero(res)<<endl;
	}
	return 0;
}
