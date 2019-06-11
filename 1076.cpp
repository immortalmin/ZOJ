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
struct Info{
	int a,b,c;
}info;
vector<Info>v;
vector<int>vv;
bool mysort(Info a,Info b){
	return a.b<b.b;
}
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	int dp[1005],pre[1005];
	while(cin>>n&&n){
		v.clear();
		vv.clear();
		memset(dp,0,sizeof(dp));
		memset(pre,0,sizeof(pre));
		for(int i=1;i<=n;i++){
			cin>>info.a>>info.b;
			info.c=i;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),mysort);
		int ans=0,ansi=v[0].c;
		for(int i=0;i<v.size();i++){
			dp[i]=1;
			for(int j=0;j<i;j++){
				if(v[i].a>v[j].b&&dp[i]<dp[j]+1){
					dp[i]=dp[j]+1;
					pre[v[i].c]=v[j].c;
				}
			}
			if(dp[i]>ans){
				ans=dp[i];
				ansi=v[i].c;
			}
		}
		while(pre[ansi]!=0){
			vv.push_back(ansi);
			ansi=pre[ansi];
		}
		vv.push_back(ansi);
		for(int i=vv.size()-1;i>=0;i--){
			if(i!=vv.size()-1) cout<<" ";
			cout<<vv[i];
		}
		cout<<endl;
	}
	return 0;
}
