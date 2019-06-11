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
bool judge(int n){
	if(n%7==0) return true;
	int a;
	while(n){
		a=n%10;
		if(a==7) return true;
		n/=10;
	}
	return false;
}
int T,n,sum=0,a[1000005],book[1000005],book2[105];
int main() {
//	freopen("1.txt","r",stdin);
	memset(book,0,sizeof(book));
	memset(book2,0,sizeof(book2));
	for(int i=1;i<1000;i++){
		if(judge(i)){
			sum++;
			if(book[sum]==0){
				book[sum]=1;
				a[sum]=i-sum+1;
			}
		}else sum=0;
	}
	cin>>T;
	while(T--){
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
//2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869
//1062 1129 1883 1893 2486 2545 2559 2730 
