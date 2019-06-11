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
int book[155];
int main() {
//	freopen("1.txt","r",stdin);
	int n;
	while(cin>>n&&n) {
//		cout<<n<<endl;
		for(int m=1; ; m++) {
			memset(book,0,sizeof(book));//标记这个建筑物是否已经被切断 
			int sum=0;//统计已经被切断的个数 
			int k2=0;//计数，即当前是m个中的第k2个 
			int k3;//保存最后一个建筑物的位置 
			book[0]=1;//第一个建筑物永远都是第一个被切断 
			sum=1;
			int flag=0;
			for(int j=1;; j++) {
				if(j==n) j=1;//遍历到最后一个之后，再从头开始 
				if(book[j]==0) {//当前建筑物还没有被切断 
					k2++;
				}
				if(k2==m){//如果这是第m个
					book[j]=1; 
					k2=0;
					sum++;
					if(j==1&&sum!=n){//提前到2 
						flag=1;
						break;
					}
				}
				if(sum==n){
					k3=j;
					break;
				}
			}
			if(flag==1){
				continue;
			} 
			else if(k3==1){
				cout<<m<<endl;
				break;
			}
		}
	}
	return 0;
}
//1051 1052 1053 1054 1055 1056 1061 1063 1086 1089 1091 1094 1099 1101 1103 1111 1115 1117 1118 1120 1123 1125 1126 1129 1130 1136 1139 1143 1150 1151 1152 1154 1159 1160 1168 1170 1177 1178 1179 1180 1181 1184 1188 1189 1190 1191 1192 1195 1197 1243 1295 1315 1325 1392 1582 1698 1707 1720 1729 1808 1831 1854 1858 1905 1963 1969 1970 1984
