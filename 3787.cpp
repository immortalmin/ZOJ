#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
//int main(){
//	freopen("xph.txt","r",stdin);
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n,k;;
//		scanf("%d %d",&n,&k);
//		int ok=0;
//		for(int i=0;i<n;i++){
//			int sum=0,x;
//			for(int j=0;j<n;j++){
//				scanf("%d",&x);
//				sum+=x;
//			}
//			if(sum>k)ok++;
//		}
//		if(ok==0)
//			printf("No solution\n");
//		else
//			printf("%d/%d\n",n,ok);
//	}
//
//}
struct E{
	int id,time;
}e;
bool cmp(E a,E b){
	return a.time<b.time;
}
int main(){
//	freopen("xph.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		int n,len;
		int t1,t2,t3,time,open;
		vector<int> v;
		vector<E> vE;
		scanf("%d %d",&n,&len);
		for(int i=1;i<=n;i++){
			scanf("%d:%d:%d",&t1,&t2,&t3);
			e.id=i;
			e.time=t1*3600+t2*60+t3;
			vE.push_back(e);
		}
		sort(vE.begin(),vE.end(),cmp);
		open=vE[0].time;
		v.push_back(vE[0].id);
		for(int i=1;i<n;i++){
			if(vE[i].time>=open+len){
				open=vE[i].time;
				v.push_back(vE[i].id); 
			}
		}
		sort(v.begin(),v.end());
		printf("%d\n",v.size());
		for(int i=0;i<v.size();i++){
			if(i!=0)printf(" ");
			printf("%d",v[i]);
		}
		printf("\n");
	}
}