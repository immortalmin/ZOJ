#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int book[10][10],a[10010];
int main(){
//	freopen("1.txt","r",stdin);
	int k1,k2,k3,n,A,B;
	a[1]=1,a[2]=1;
	while(scanf("%d%d%d",&A,&B,&n)!=EOF){
		if(A==0&&B==0&&n==0) break;
		memset(book,0,sizeof(book));
		k1=0,k2=0,k3=0;
		book[1][1]=1;
		
		if(n==1||n==2) printf("1\n");
		else{
			for(int i=3;i<=n;i++){
				a[i]=(A*a[i-1]+B*a[i-2])%7;
				if(book[a[i-1]][a[i]]==0){
					book[a[i-1]][a[i]]=i-1;
				}else{
					k1=i-2;//第一个循环的结尾 
					k2=book[a[i-1]][a[i]];//之后循环的起点值
					k3=k1-k2+1;//循环的长度 
					break;
				}
				
			}
			if(k1!=0){
				printf("%d\n",a[(n-k2)%k3+k2]);
			}
			else printf("%d\n",a[n]);
		}
	}
	return 0;
}