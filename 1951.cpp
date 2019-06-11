#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<cstdio>
#include<map>
#include<queue>
using namespace std;
int book[1000100],prime[1000020],k=0;
void getprime(){
	book[1]=1;
	for(int i=2;i<1000010;i++){
		if(book[i]==0){
			prime[k++]=i;
			if(i>1000000){
				return ;
			}
			for(int j=i+i;j<1000010;j+=i){
				book[j]=1;
			}
		}
	}
	return ;
}
//int book[500010],prime[1000020];
//void getprime(){
//	int k=0;
//	book[1]=1;
//	for(int i=2;i<500010;i++){
//		if(book[i]==0){
//			prime[k++]=i;
//			if(i>500000){
//				return ;
//			}
//			for(int j=i+i;j<500010;j+=i){
//				book[j]=1;
//			}
//		}
//	}
//	return ;
//}
int main() {
//	freopen("1.txt","r",stdin);
	int n;
	memset(book,0,sizeof(book));
	getprime();
	while(scanf("%d",&n)&&n) {
		for(int i=0;i<=k;i++){
			if(prime[i]>n){
				printf("Goldbach's conjecture is wrong.\n");
				break;
			}
			if(book[n-prime[i]]==0){
				printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
				break;
			}
		}
	}
	return 0;
}
//1051 1052 1053 1054 1055 1056 1061 1063 1086 1089 1091 1094 1099 1101 1103 1111 1115 1117 1118 1120 1123 1125 1126 1129 1130 1136 1139 1143 1150 1151 1152 1154 1159 1160 1168 1170 1177 1178 1179 1180 1181 1184 1188 1189 1190 1191 1192 1195 1197 1243 1295 1315 1325 1392 1582 1698 1707 1720 1729 1808 1831 1854 1858 1905 1963 1969 1970 1984
