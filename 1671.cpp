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
struct Info {
	int x;
	int y;
	int hp;
	int cost;
} info;
queue<Info>q;
int n,m,mmap[10][10],startx,starty,book[10][10];
int dir[4][2]= {{0,1},{0,-1},{1,0},{-1,0}};
bool judge(int x,int y,int hp) {
	if(x<1||y<1||x>n||y>m||mmap[x][y]==0||hp<1) return false;
	return true;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>m>>n) {
		if(n==0&&m==0) break;
		memset(book,0,sizeof(book));
		while(!q.empty()) q.pop();
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin>>mmap[i][j];
				if(mmap[i][j]==2) {
					startx=i,starty=j;
				}
			}
		}
		info.x=startx,info.y=starty,info.hp=6,info.cost=0;
		book[startx][starty]=1;
		q.push(info);
		int flag=0;
		while(!q.empty()) {
			int nowx=q.front().x;
			int nowy=q.front().y;
			int nowhp=q.front().hp;
			int nowcost=q.front().cost;
			if(nowcost>n*m) {
				q.pop();
				continue;
			}
//			if(mmap[nowx][nowy]==3) {
//				cout<<nowcost<<endl;
//				flag=1;
//				break;
//			}
//			cout<<nowx<<" "<<nowy<<" "<<nowhp<<" "<<nowcost<<endl;
			for(int i=0; i<4; i++) {
				info.x=nowx+dir[i][0];
				info.y=nowy+dir[i][1];
				info.hp=nowhp-1;
				info.cost=nowcost+1;
				if(judge(info.x,info.y,info.hp)) {
					if(mmap[info.x][info.y]==4) {
						info.hp=6;
						mmap[info.x][info.y]=1;
					} else if(mmap[info.x][info.y]==3) {
						cout<<info.cost<<endl;
						flag=1;
						break;
					}
					q.push(info);
				}
			}
			if(flag==1) break;
			q.pop();
		}
		if(flag==0) cout<<-1<<endl;
	}
	return 0;
}
//3179、   1671、   2165、   4036、   1944、
