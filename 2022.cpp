#include<iostream>
#include<string>
#include<cstdio>
#include<map>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		int sum=0;
		while(a){
			sum+=a/5;
			a/=5;
		}
		printf("%d\n",sum);
	}
	return 0;
}