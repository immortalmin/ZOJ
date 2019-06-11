#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int book[10000],a[10000];
int main() {
//	freopen("1.txt","r",stdin);
	int n,x1,x2,c,maxn,l,r;
	while(~scanf("%d",&n)) {
		memset(book,-1,sizeof(book));
		memset(a,0,sizeof(a));
		maxn=-1,l=10000,r=-1;
		for(int z=0; z<n; z++) {
			cin>>x1>>x2>>c;
			if(x1<l) l=x1;
			if(x2>r) r=x2;
			if(c>maxn) maxn=c;
			for(int i=x1+1; i<=x2; i++) {
				book[i]=c;
			}
		}
		int pre=-1;
		for(int i=l+1;i<=r;i++){
			if(book[i]==-1){
				pre=-1;
				continue;
			}
			if(book[i]!=pre){
				a[book[i]]++;
				pre=book[i];
			}
		}
		for(int i=0;i<=maxn;i++){
			if(a[i]==0) continue;
			cout<<i<<" "<<a[i]<<endl;
		}
		cout<<endl;
	}



	return 0;
}