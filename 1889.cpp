#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	while(~scanf("%d",&n)){
		int a=1,sum=1;
		while(a<n){
			a=a*10+1;
			sum++;
		}
		while(a%n!=0){
			a=a%n*10+1;
			sum++;
		}
		printf("%d\n",sum);
//		cout<<sum<<endl;
	}
	return 0;
} 