#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m,a,maxn=-1,sum=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			sum+=a;
			if(a>maxn) maxn=a;
		}
		sum-=maxn;
		if(maxn*(m-1)>=sum){
			printf("%d\n",maxn);
		}else{
			int b=sum-maxn*(m-1),c;
			c=b%m==0?b/m:b/m+1;
			printf("%d\n",maxn+c);
		}
		
	}
}