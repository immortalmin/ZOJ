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
vector<int>v;
map<int,int>mm;
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		int n,a[1005];
		mm.clear();
		v.clear();
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(mm[a[i]]==0){
				mm[a[i]]=1;
				v.push_back(a[i]);
			}else mm[a[i]]++;
		}
		int flag=0,maxn=-1,k;
		for(int i=0;i<v.size();i++){
			if(mm[v[i]]>maxn){
				maxn=mm[v[i]];
				k=v[i];
				flag=0;
			}else if(mm[v[i]]==maxn){
				flag=1;
			}
		}
		if(flag==1) cout<<"Nobody"<<endl;
		else cout<<k<<endl;
	}
	
	return 0;
}
//1051 1052 1053 1054 1055 1056 1061 1063 1086 1089 1091 1094 1099 1101 1103 1111 1115 1117 1118 1120 1123 1125 1126 1129 1130 1136 1139 1143 1150 1151 1152 1154 1159 1160 1168 1170 1177 1178 1179 1180 1181 1184 1188 1189 1190 1191 1192 1195 1197 1243 1295 1315 1325 1392 1582 1698 1707 1720 1729 1808 1831 1854 1858 1905 1963 1969 1970 1984
