#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<math.h>
using namespace std;
char a[20][20];
int book[20][20];
void var() {
	int k1=1;
	for(int i=1; i<=15; i++) {
		int k=10,flag=0;
		for(int j=10; j>=1; j--) {
			if(a[j][i]!=' ') {
				flag=1;
				a[k][i]=a[j][i];
				if(k!=j) a[j][i]=' ';
				k--;
			}
		}
		if(flag!=0) { //这一列不是空列
			if(i!=k1) {
				for(int j=1; j<=10; j++) {
					a[j][k1]=a[j][i];
					a[j][i]=' ';
				}
			}
			k1++;
		}
	}
	return ;
}
char nowc;
int sum;
void dfs(int x,int y) {
	if(book[x][y]==0&&a[x][y]==nowc) {
//		cout<<"!"<<endl; 
		sum++;
		book[x][y]=1;
		if(x-1>=1) dfs(x-1,y);
		if(x+1<=10) dfs(x+1,y);
		if(y-1>=1) dfs(x,y-1);
		if(y+1<=15) dfs(x,y+1);
	}
	return ;
}
void del(int x,int y) {
	if(book[x][y]==0&&a[x][y]==nowc) {
		book[x][y]=1;
		a[x][y]=' ';
		if(x-1>=1) del(x-1,y);
		if(x+1<=10) del(x+1,y);
		if(y-1>=1) del(x,y-1);
		if(y+1<=15) del(x,y+1);
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	int n,T;
	char c[100];
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
		scanf("%d",&n);
		if(t!=1) printf("\n");
		for(int z=1; z<=n; z++) {
			for(int i=1; i<=10; i++) {
				scanf("%s",a[i]+1);
			}
			if(z!=1) printf("\n");
			printf("Game %d:\n\n",z);
			int count=0;
			int sum1=0,sum2=0;//分别记录总分，以及数量
			while(true) {
				memset(book,0,sizeof(book));
				int maxn=-1,kx,ky;
				for(int j=1; j<=15; j++) {
					for(int i=10; i>=1; i--) {
						if(book[i][j]==0&&a[i][j]!=' ') {
							nowc=a[i][j];
							sum=0;
							dfs(i,j);
//							cout<<sum<<endl;
							if(sum>maxn) {
								maxn=sum;
								kx=i,ky=j;
							}
						}
					}
				}
//				cout<<maxn<<endl; 
				if(maxn==1) break;
				if(maxn==-1) {
					sum1+=1000;
					break;
				}
				memset(book,0,sizeof(book));
				nowc=a[kx][ky];
				printf("Move %d at (%d,%d): removed %d balls of color %c, got %d points.\n",++count,11-kx,ky,maxn,nowc,(maxn-2)*(maxn-2));
				sum1+=(maxn-2)*(maxn-2);
				sum2+=maxn;
				del(kx,ky);
				var();
			}
			printf("Final score: %d, with %d balls remaining.\n",sum1,150-sum2);
		}
	}
	return 0;
}