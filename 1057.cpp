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
int main(){
//	freopen("1.txt","r",stdin);
	int n,a[25],b[25],k=0;
	while(cin>>n&&n){
		int sum1=0,sum2=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++){
			if(abs(a[i]-b[i])==1){
				if(a[i]>b[i]){
					if(a[i]==2) sum2+=6;
					else sum2+=a[i]+b[i];
				}else{
					if(b[i]==2) sum1+=6;
					else sum1+=a[i]+b[i];
				}
			}else if(a[i]!=b[i]){
				if(a[i]>b[i]) sum1+=a[i];
				else sum2+=b[i];
			}
		}
		k++;
		if(k!=1) cout<<endl;
		printf("A has %d points. B has %d points.\n",sum1,sum2);
	}
	return 0;
}
