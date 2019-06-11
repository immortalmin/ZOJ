#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n,a[30],len,book[30],flag=0,kk=0;
void dfs(int start,int sum,int k) {
	if(flag==1) return ;
	if(k==4) {
		flag=1;
		return ;
	}
	for(int i=start; i<=n; i++) {
		if(book[i]==0&&sum+a[i]<=len) {
			book[i]=1;
			if(sum+a[i]==len) dfs(0,0,k+1);
			else dfs(i+1,sum+a[i],k);
			book[i]=0;
		}
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--) {
		memset(book,0,sizeof(book));
		kk=0;
		flag=0;
		int sum1=0,maxn=-1;
		scanf("%d",&n);
		for(int i=1; i<=n; i++) {
			scanf("%d",&a[i]);
			sum1+=a[i];
			if(a[i]>maxn) maxn=a[i];
		}
		sort(a+1,a+n+1);
		if(sum1%4!=0) {
			printf("no\n");
		} else {
			len=sum1/4;
			if(maxn>len) printf("no\n");
			else {
				dfs(1,0,0);
				if(flag==1) printf("yes\n");
				else printf("no\n");
			}
		}
	}
	return 0;
}