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
using namespace std;
long long int arr1[100005],arr2[100005];
int main(){
//	freopen("xph.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&arr1[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%lld",&arr2[i]);
		}
		long long int sum=0;
		int flag=1;
		for(int i=n-1;i>=0;i--){
			if(arr2[i]+sum>=arr1[i])
				sum=arr2[i]+sum-arr1[i];
			else{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
}