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
using namespace std;
int cal(int o,int p){
	return o*pow(2,p);
}
int main(){
//	freopen("1.txt","r",stdin);
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int flag=0;
		for(int o=1;;o+=2){
			for(int p=0;;p++){
				if(cal(o,p)>n) break;
				else if(cal(o,p)==n){
					flag=1;
					cout<<o<<" "<<p<<endl;
					break;
				}
			}
			if(flag==1) break;
		}
	}
	return 0;
}
