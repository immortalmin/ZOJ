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
map<int,int>mm;
int main() {
//	freopen("1.txt","r",stdin);
	int n;
	while(cin>>n){
		int flag=0,x=1,k=1;
		mm.clear();
		while(true){
			if((x*2)%n==1) break;
			k++;
			x=(x*2)%n;
			if(mm[x]==0){
				mm[x]=1;
			}else{
				flag=1;
				break;
			}
		}
		if(flag==0) printf("2^%d mod %d = 1\n",k,n);
		else printf("2^? mod %d = 1\n",n);
	}
	return 0;
}
