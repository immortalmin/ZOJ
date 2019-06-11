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
//	string s;
	char s[100];
	int a,b;
	Info(int x = 0):b(x) {}
} info;
bool operator<(Info a,Info b) {
	return a.b>b.b;
}
priority_queue<Info>q;
int main() {
//	freopen("1.txt","r",stdin);
	string s;
	char a[100];
	int sum=0;
	while(~scanf("%s",&a)) {
		if(a[0]=='G'&&a[1]=='E'&&a[2]=='T') {
			if(q.empty()) {
				printf("EMPTY QUEUE!\n");
			} else {
				Info c=q.top();
				printf("%s %d\n",c.s,c.a);
				q.pop();
			}
		} else {
			scanf("%s %d %d",&info.s,&info.a,&info.b);
			q.push(info);
		}
	}
	return 0;
}
