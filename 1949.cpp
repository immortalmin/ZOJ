#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n,a[200][200];
	while(cin>>n){
		if(n==0) break;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		int summ1=0,summ2=0,x,y;
		for(int i=1;i<=n;i++){
			int sum1=0,sum2=0;
			for(int j=1;j<=n;j++){
				sum1+=a[i][j];
				sum2+=a[j][i];
			}
			if(sum1%2!=0){
				summ1++;
				x=i;
			}
			if(sum2%2!=0){
				summ2++;
				y=i;
			}
		}
		if(summ1==0&&summ2==0) cout<<"OK"<<endl;
		else if(summ1==1&&summ2==1) printf("Change bit (%d,%d)\n",x,y);
		else cout<<"Corrupt"<<endl;
	}
	return 0;
} 