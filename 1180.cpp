#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int book[1000010];
int d(int n){
	int sum=n,a;
	while(n){
		a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
}
int main() {
//	freopen("1.txt","r",stdin);
	int a,sum=0;
	for(int i=1;i<=1000000;i++){
		a=d(i);
		if(a>1000000) break;
		book[a]=1;
	}
	for(int i=1;i<=1000000;i++){
		if(book[i]==0) printf("%d\n",i);
	}
	return 0;
}