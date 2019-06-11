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
int main() {
//	freopen("1.txt","r",stdin);
	int n,a[105][105],b[105][105];
	cin>>n;
	//提前计算好每列中前n个元素的和 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			b[i][j]=b[i-1][j]+a[i][j];
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	//选择i行到j行之间的元素 
	int maxn=-1e10;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int sum=0;
			for(int z=1;z<=n;z++){
				sum+=b[j][z]-b[i-1][z];
				if(sum<0) sum=0;
				if(sum>maxn) maxn=sum;
			} 
		}
	}
	cout<<maxn<<endl;
	return 0;
}
