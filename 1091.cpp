#include<iostream>
#include<string>
#include<cstring>
#include<queue>
using namespace std;
int book[10][10],a[10],n;
int ori[8][2]={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
struct Info{
	int xx;
	int yy;
	int zz;
}info;
queue<Info>q;
int main(){
//	freopen("1.txt","r",stdin);
	string s1,s2;
	while(cin>>s1>>s2){
		memset(book,0,sizeof(book));
		while(q.size()!=0){//清空queue 
			q.pop();
		}
		Info start;
		start.xx=int(s1[0]-96);
		start.yy=int(s1[1]-48);
		start.zz=0;
		book[start.xx][start.yy]=1;
		int endx=int(s2[0]-96);
		int endy=int(s2[1]-48);
//		cout<<start.xx<<" "<<start.yy<<" "<<end.xx<<" "<<end.yy<<endl;
		q.push(start);
//		int left=0,right=1;
		while(q.size()){
			int nowx=q.front().xx,nowy=q.front().yy,nowstep=q.front().zz;
			if(nowx==endx&&nowy==endy){
				cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<nowstep<<" knight moves."<<endl;
				break;
			}
			for(int i=0;i<8;i++){
				int nextx=nowx+ori[i][0];
				int nexty=nowy+ori[i][1];
				if(book[nextx][nexty]==0&&nextx>=1&&nextx<=8&&nexty>=1&&nexty<=8){
					info.xx=nextx;
					info.yy=nexty;
					info.zz=nowstep+1;
					q.push(info);
					book[nextx][nexty]=1;
				}
			}
			q.pop();
		}
	}
	return 0;
} 