#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<cstdio>
#include<vector>
using namespace std;
vector<int>v1,v2;//v1负，v2正 
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		v1.clear();
		v2.clear();
		int n,k,a,flag=0,maxn=0;
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			if(abs(a)>abs(maxn)){
				maxn=a;
			}
			if(a>0) v2.push_back(a);
			else if(a<0) v1.push_back(a);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		long long int sum=0;
		if(maxn<0){//先走右边  v2 
			for(int i=(int)v2.size()-1;i>=0;i-=k){
				sum+=v2[i]*2;
			}
			for(int i=k;i<=(int)v1.size()-1;i+=k){
				sum+=abs(v1[i]*2);
			}
			if(v1.size()!=0)
				sum+=abs(v1[0]);
		}else{
			for(int i=0;i<=(int)v1.size()-1;i+=k){
				sum+=abs(v1[i]*2);
			}
			
			for(int i=(int)v2.size()-1-k;i>=0;i-=k){
				sum+=v2[i]*2;
			}
			if(v2.size()!=0)
				sum+=v2[(int)v2.size()-1];
		}
		printf("%lld\n",sum);
	}
	return 0;
}