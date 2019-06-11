#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin);
	int n,q,m,a[200][200],b;
	while(scanf("%d%d",&n,&q)){
		if(n==0&&q==0) break;
		memset(a,0,sizeof(a));
		int maxd=-1;
		for(int i=1;i<=n;i++){
			scanf("%d",&m);
			for(int j=1;j<=m;j++){
				scanf("%d",&b);
				a[i][b]=1;
				if(b>maxd) maxd=b;
			}
		}
		int flag=0,maxn=-1,k;
		for(int i=1;i<=maxd;i++){
			int sum=0;
			for(int j=1;j<=n;j++){
				if(a[j][i]==1) sum++;
			}
			if(sum>=q){
				if(sum>maxn){
					maxn=sum;
					k=i;
				}
//				printf("%d\n",i);
				flag=1;
//				break;
			}
		}
		if(flag==0){
			printf("0\n");
		}else{
			printf("%d\n",k);
		}
	}
	return 0;
}