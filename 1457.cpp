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
int prime[55];
void cal_prime() {
	prime[1]=1;
	for(int i=2; i<=50; i++) {
		if(prime[i]==0) {
			for(int j=i+i; j<=50; j+=i) {
				prime[j]=1;
			}
		}
	}
	return ;
}
int a[25],book[25],n,flag,sum=0;
void dfs(int step) {
	if(flag==1) return ;
	if(step==n+1) {
		if(prime[a[step-1]+a[1]]==0) {
			for(int i=1; i<=n; i++) {
				if(i!=1) printf(" ");
				printf("%d",a[i]);
			}
			printf("\n");
		}
		return ;
	}
	for(int i=1; i<=n; i++) {
		if(step==1&&i>1){
			flag=1;
			return ;
		}
		if(book[i]==0) {
			if(step!=1) {
				if(prime[i+a[step-1]]==1) continue;
			}
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	cal_prime();
	int k=1;
	while(~scanf("%d",&n)) {
		printf("Case %d:\n",k++);
		flag=0;
		if(n%2!=0){
			printf("\n");
			continue;
		}
		memset(book,0,sizeof(book));
		dfs(1);
		printf("\n");
	}
	return 0;
}
