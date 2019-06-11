#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
using namespace std;
struct Info{
	int x,y;
}info;
queue<Info>q;
char mmap[25][25];
int n,m,startx,starty,book[25][25];
int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int calc(int x,int y){
	int sum=0;
	if(x-1>=1&&mmap[x-1][y]=='.'||x-1<1) sum++;
	if(x+1<=n&&mmap[x+1][y]=='.'||x+1>n) sum++;
	if(y-1>=1&&mmap[x][y-1]=='.'||y-1<1) sum++;
	if(y+1<=m&&mmap[x][y+1]=='.'||y+1>m) sum++;
	return sum; 
}
bool judge(int x,int y){
	if(x<1||y<1||x>n||y>m||book[x][y]==1||mmap[x][y]=='.') return false;
	return true;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>n>>m>>startx>>starty){
		if(n==0&&m==0&&startx==0&&starty==0) break;
		while(!q.empty()) q.pop();
		memset(book,0,sizeof(book));
		for(int i=1;i<=n;i++){
			scanf("%s",mmap[i]+1);
		}
		int sum=0;
		info.x=startx,info.y=starty;
		sum+=calc(startx,starty);
		book[info.x][info.y]=1;
		q.push(info);
		while(!q.empty()){
			Info now=q.front();
			for(int i=0;i<8;i++){
				if(judge(now.x+dir[i][0],now.y+dir[i][1])){
					Info next;
					next.x=now.x+dir[i][0];
					next.y=now.y+dir[i][1];
					sum+=calc(next.x,next.y);
					book[next.x][next.y]=1;
					q.push(next);
				}
			}
			q.pop();
		}
		cout<<sum<<endl;
	}
	return 0;
}
//1047 1062 1068 1088 1090 1129 1278 1392 1403 1414 1514 1698 1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 