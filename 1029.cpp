#include<iostream>#include<string>#include<algorithm>#include<cstring>#include<vector>#include<cmath>#include<cstdio>#include<map>#include<queue>using namespace std;int book[205];int main() {//	freopen("1.txt","r",stdin);	int T;	cin>>T;	while(T--){		int n,a,b,t;		memset(book,0,sizeof(book));		cin>>n;		for(int i=0;i<n;i++){			cin>>a>>b;			if(a>b){				t=a;				a=b;				b=t;			}			if(a%2==0) a/=2;			else a=(a+1)/2;			if(b%2==0) b/=2;			else b=(b+1)/2;			for(int j=a;j<=b;j++){				book[j]++;			}		}		int maxn=0;		for(int i=0;i<205;i++){			if(book[i]>maxn) maxn=book[i];		}		cout<<maxn*10<<endl;	}	return 0;}//1051 1052 1053 1054 1055 1056 1061 1063 1086 1089 1091 1094 1099 1101 1103 1111 1115 1117 1118 1120 1123 1125 1126 1129 1130 1136 1139 1143 1150 1151 1152 1154 1159 1160 1168 1170 1177 1178 1179 1180 1181 1184 1188 1189 1190 1191 1192 1195 1197 1243 1295 1315 1325 1392 1582 1698 1707 1720 1729 1808 1831 1854 1858 1905 1963 1969 1970 1984