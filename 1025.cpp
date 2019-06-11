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
struct Info {
	int a,b;
} info;
vector<Info>v;
int book[5005];
bool mysort(Info a,Info b) {
	if(a.a!=b.a) return a.a<b.a;
	return a.b<b.b;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T,n;
	cin>>T;
	while(T--) {
		cin>>n;
		v.clear();
		memset(book,0,sizeof(book));
		for(int i=0; i<n; i++) {
			cin>>info.a>>info.b;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),mysort);
		int sum=0,nowa=0,nowb=0,time=0;
		while(sum<n) {
			time++;
			nowa=0,nowb=0;
			for(int i=0; i<v.size(); i++) {
				if(book[i]==0){
					if(v[i].a>=nowa&&v[i].b>=nowb){
						book[i]=1;
						nowa=v[i].a;
						nowb=v[i].b;
						sum++;
					}
				}
			}
		}
		cout<<time<<endl;
	}
	return 0;
}
