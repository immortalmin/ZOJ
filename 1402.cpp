#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin);
	int n,a[100],sum,sum2;
	while(scanf("%d",&n)&&n){
		sum=0,sum2=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%2!=0){
			printf("No equal partitioning.\n");
		}else{
			sum/=2;
			int k;
			for(int i=1;;i++){
				sum2+=a[i];
				if(sum2>=sum){
					k=i;
					break;
				}
			}
			if(sum2==sum){
				printf("Sam stops at position %d and Ella stops at position %d.\n",k,k+1);
			}else{
				printf("No equal partitioning.\n");
			}
		}
	}
	return 0;
}