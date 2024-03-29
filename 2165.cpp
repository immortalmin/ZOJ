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
} info;
queue<Info>q;
int n,m,startx,starty,book[25][25];
char mmap[25][25];
int dir[4][2]= {{0,1},{0,-1},{1,0},{-1,0}};
bool judge(int x,int y) {
	if(x<1||y<1||x>n||y>m||mmap[x][y]=='#'||book[x][y]==1) return false;
	return true;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>m>>n){
		if(n==0&&m==0) break;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>mmap[i][j];
				if(mmap[i][j]=='@'){
					startx=i;
					starty=j;
				}
			}
		}
		while(!q.empty()) q.pop();
		memset(book,0,sizeof(book));
		info.x=startx,info.y=starty;
		book[startx][starty]=1;
		q.push(info);
		int sum=1;
		while(!q.empty()){
			Info now=q.front();
			Info next;
			q.pop();
			for(int i=0;i<4;i++){
				next.x=now.x+dir[i][0];
				next.y=now.y+dir[i][1];
				if(judge(next.x,next.y)){
					book[next.x][next.y]=1;
					q.push(next);
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
//2165、   4036、   1944、
