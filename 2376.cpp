#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
//	cin>>T;
	while(T--){
		int n,m,minn,maxn,a,b;
		scanf("%d%d",&n,&m);
//		cin>>n>>m;
		minn=-1,maxn=-1;;
		for(int i=1;i<=m;i++){
			scanf("%d",&a);
//			cin>>a;
			b=min(a,n-a);
			if(b>minn) minn=b;
			b=max(a,n-a);
			if(b>maxn) maxn=b;
		}
		printf("%d %d\n",minn,maxn);
//		cout<<minn<<" "<<maxn<<endl;
	}
	return 0;
} 