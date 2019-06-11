#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n,m,w,h,mmap[105][105];
int cal(int x,int y){
	int sum=0;
	for(int i=x;i<x+h;i++){
		for(int j=y;j<y+w;j++){
			if(mmap[i][j]==1) sum++;
		}
	}
	return sum;
}
int main() {
//	freopen("1.txt","r",stdin);
	int t,a,b;
	while(cin>>t){
		if(t==0) break;
		cin>>m>>n;
		memset(mmap,0,sizeof(mmap));
		for(int z=0;z<t;z++){
			cin>>a>>b;
			mmap[b][a]=1;
		}
//		cout<<"map:#################################"<<endl;
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=m;j++){
//				cout<<mmap[i][j];
//			}
//			cout<<endl;
//		}
//		cout<<"######################################"<<endl;
		cin>>w>>h;
		int maxn=0,ki,kj;
//		for(int i=1;i<=n-w+1;i++){
//			for(int j=1;j<=m-h+1;j++){
//				cout<<i<<" "<<j<<endl;
//				if(cal(i,j)>maxn){
//					maxn=cal(i,j);
//					ki=i;
//					kj=j;
//				}
//			}
//		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(cal(i,j)>maxn){
					maxn=cal(i,j);
				}
			}
		}
//		cout<<ki<<" "<<kj<<endl;
		cout<<maxn<<endl;
//		cout<<endl;
	}
	return 0;
}
//1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869
//1062 1129