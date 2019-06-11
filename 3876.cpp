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
bool judge(int n){
	if(n%400==0||n%4==0&&n%100!=0) return true;
	else return false;
}
int main() {
//	freopen("1.txt","r",stdin);
	int a[10000];//保存每年五一放假的天数 
	int b[7]={9,6,5,5,5,5,6};
	int week=1;
	a[1928]=6;
	for(int i=1929;i<=9999;i++){
		if(judge(i)){
			week=(week+366)%7;
		}else{
			week=(week+365)%7;
		}
		a[i]=b[week];
	}
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
//1051 1052 1053 1054 1055 1056 1061 1063 1086 1089 1091 1094 1099 1101 1103 1111 1115 1117 1118 1120 1123 1125 1126 1129 1130 1136 1139 1143 1150 1151 1152 1154 1159 1160 1168 1170 1177 1178 1179 1180 1181 1184 1188 1189 1190 1191 1192 1195 1197 1243 1295 1315 1325 1392 1582 1698 1707 1720 1729 1808 1831 1854 1858 1905 1963 1969 1970 1984
