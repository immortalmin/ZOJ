#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
struct Info{
	int x,y;
}info;
queue<Info>q;
char mmap[105][105];
int book[105][105],n,m;
int dir[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
bool judge(int x,int y){
	if(x<1||y<1||x>n||y>m||mmap[x][y]=='*'||book[x][y]==1) return false;
	return true;
}
void dfs(int x,int y){
	for(int i=0;i<8;i++){
		if(judge(x+dir[i][0],y+dir[i][1])){
			book[x+dir[i][0]][y+dir[i][1]]=1;
			dfs(x+dir[i][0],y+dir[i][1]);
		}
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		for(int i=1;i<=n;i++){
			scanf("%s",mmap[i]+1);
		}
		memset(book,0,sizeof(book));
		int sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(book[i][j]==0&&mmap[i][j]=='@'){
					dfs(i,j);
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
//1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 
//1062 1129 