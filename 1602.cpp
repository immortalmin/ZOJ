#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAXINT 0x7fffffff
int book[110][110],a[110];
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	while(~scanf("%d",&n)){
		for(int i=0;i<110;i++){
			for(int j=0;j<110;j++){
				book[i][j]=MAXINT;
			}
		}
		for(int i=1;i<=n;i++){
			book[i-1][i]=book[i][i]=book[i][i+1]=0;
		}
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n-2;i++){
			book[i][i+2]=a[i]*a[i+1]*a[i+2];
		}
		for(int len=3;len<=n-1;len++){
			for(int i=1;i+len<=n;i++){
				int j=i+len;
				for(int k=i+1;k<j;k++){
					book[i][j]=min(book[i][j],book[i][k]+a[i]*a[k]*a[j]+book[k][j]);
				}
			}
		}
		cout<<book[1][n]<<endl;
	}
	return 0;
} 