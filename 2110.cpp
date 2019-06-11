#include<iostream>//2110
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
int n,m,t;
int startx,starty,endx,endy;
int nextx,nexty;
char mmap[10][10];
int flag=0,book[10][10],dir[4][2]= {{1,0},{-1,0},{0,1},{0,-1}};
bool judge(int x,int y) {
	if(book[x][y]==1||mmap[x][y]=='X'||x<1||y<1||x>n||y>m) return false;
	return true;
}
//void dfs(int x,int y,int time) {
//	if(flag==1) return ;
////	cout<<x<<" "<<y<<" "<<time<<endl;
//	if(mmap[x][y]=='D'&&time==t) {
//		flag=1;
//		return ;
//	}
//	int dis;                              //奇偶剪枝：判断在剩余时间里能否走到终点，不是充要条件
//    dis=(t-time)-(fabs(x-endx)+fabs(y-endy));    // =剩下的时间-无障碍物下的最短路径
//    if(dis<0||dis%2)  return;  
//	for(int i=0; i<4; i++) {
//		nextx=x+dir[i][0];
//		nexty=y+dir[i][1];
//		if(judge(nextx,nexty)) {
//			book[nextx][nexty]=1;
//			dfs(nextx,nexty,time+1);
//			if(flag==1) return ;
//			book[nextx][nexty]=0;
//		}
//	}
//	return ;
//}

void dfs(int x,int y,int time) {
    if(mmap[x][y]=='D'&&time==t) {
//        cout<<"YES\n";
        flag=1;
        return;
    }
 
    int dis;                              //奇偶剪枝：判断在剩余时间里能否走到终点，不是充要条件
    dis=(t-time)-(fabs(x-endx)+fabs(y-endy));    // =剩下的时间-无障碍物下的最短路径
    if(dis<0||dis%2)  return;                //小于0或为奇数就剪掉
 
    for(int i=0; i<4; i++) {
        int next_x=x+dir[i][0];
        int next_y=y+dir[i][1];
        if(next_x<1||next_y<1||next_x>n||next_y>m||mmap[next_x][next_y]=='X'||book[next_x][next_y]==1)
            continue;
        else {
            book[next_x][next_y]=1;
            dfs(next_x,next_y,time+1);
            if(flag)  return;
            book[next_x][next_y]=0;
        }
    }
    return;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>n>>m>>t) {
		if(n==0&&m==0&&t==0) break;
		flag=0;
		memset(book,0,sizeof(book));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin>>mmap[i][j];
				if(mmap[i][j]=='S') {
					startx=i;
					starty=j;
				}
				if(mmap[i][j]=='D') {
					endx=i;
					endy=j;
				}
			}
		}
		book[startx][starty]=1;
		dfs(startx,starty,0);
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
