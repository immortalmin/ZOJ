#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
vector<int>v1,v2;
int mmap[30][30],book[30];
int n,maxn=-1000000000;
void dfs(int step) {
	if(step==n+1) {
		v1.clear();
		v2.clear();
		for(int i=1; i<=n; i++) {
			if(book[i]==0) v1.push_back(i);
			else v2.push_back(i);
		}
//		for(int i=0;i<v1.size();i++){
//			cout<<v1[i]<<" ";
//		}
//		cout<<endl;
		int sum=0;
		int len1=v1.size();
		int len2=v2.size();
		for(int i=0; i<len1; i++) {
			for(int j=0; j<len2; j++) {
				sum+=mmap[v1[i]][v2[j]];
			}
		}
		if(sum>maxn) maxn=sum;
		return;
	}
	book[step]=0;
	dfs(step+1);
	book[step]=1;
	dfs(step+1);
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T,k=0;
	scanf("%d",&T);
	while(T--) {
		maxn=-1000000000;
		memset(book,0,sizeof(book));
		k++;
		scanf("%d",&n);
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				scanf("%d",&mmap[i][j]);
			}
		}
		dfs(1);
		if(k!=1) printf("\n");
		printf("%d\n",maxn);
	}
//	cout<<endl;
	return 0;
}