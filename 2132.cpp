#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
map<long long,int>mm;
long long n,a;
int main(){
//	freopen("1.txt","r",stdin);
	while(~scanf("%lld",&n)){
		long long maxn=-1;
		int k,flag=0;
		mm.clear();
		for(int i=1;i<=n;i++){
			scanf("%lld",&a);
			if(flag==1) continue;
			mm[a]++;
			if(mm[a]>maxn){
				maxn=mm[a];
				k=a;
				if(maxn>n/2) flag=1;
			}
		} 
		printf("%d\n",k);
	}
	return 0;
}