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
vector<int>v;
map<int,int>book;
int T,n,a,aa[50],flag;
void dfs(int step,int l,int sum,int k){//分别是第几个，起点，和，需要找几个 
	if(sum>v[n-1]) return ;
	if(step==k+1){
		if(book[sum]==1){
			flag=1;
			for(int i=1;i<step;i++){
				if(i!=1) printf("+");
				printf("%d",aa[i]);
			}
			printf("=%d\n",sum);
		}
		return ;
	}
	for(int i=l;i<n;i++){
		aa[step]=v[i];
		dfs(step+1,i+1,sum+v[i],k);
	} 
}
int main() {
//	freopen("1.txt","r",stdin);
	scanf("%d",&T);
	for(int z=0;z<T;z++){
		scanf("%d",&n);
		flag=0;
		v.clear();
		book.clear();
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			book[a]=1;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
//		if(z!=0) cout<<endl;
		for(int i=2;i<n;i++){
			dfs(1,0,0,i);
		}
		if(flag==0){
			printf("Can't find any equations.\n");
		}
		cout<<endl;
	}
	return 0;
}
