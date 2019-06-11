#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string> 
#include<map>
#include<queue>
#include<vector>
using namespace std;
struct Info{
	int a,b,k;//分别是两个水壶的水量以及操作序号 
}info;
vector<string>v;
int W[2];//表示两个水壶中的水量
int C[2];//表示两个水壶中的容量
int target;//目标 
int pre[100000];//保存每个操作的前一次操作
string action[100000];//保存每次操作 
int book[1005][1005];//标记已经出现过的操作 
void fill(int x){
	W[x]=C[x];
	return ;
}
void empty(int x){
	W[x]=0;
	return ;
}
void pour(int x,int y){
	int rem=C[y]-W[y];//水壶y的剩余空间
	if(rem>W[x]){//装不满y 
		W[y]+=W[x]; 
		W[x]=0;
	}else{
		W[y]=C[y];
		W[x]-=rem;
	}
	return ;
}
queue<Info>q;
void findroot(int x){
	while(x!=pre[x]){
		v.push_back(action[x]);
//		cout<<action[x]<<endl;
		x=pre[x];
		
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>C[0]>>C[1]>>target){
		int k=1;
		v.clear();
		memset(W,0,sizeof(W));
		memset(pre,0,sizeof(pre));
		memset(book,0,sizeof(book));
		while(!q.empty()) q.pop();
		info.a=0,info.b=0,info.k=k++;
		q.push(info);
		book[0][0]=1;
		pre[1]=1;
		int flag=0;
		while(!q.empty()){
			Info now=q.front();
//			cout<<now.a<<" "<<now.b<<" "<<now.k<<endl;
			Info next;
			if(now.b==target){
				findroot(now.k);
				for(int i=v.size()-1;i>=0;i--){
					cout<<v[i]<<endl;
				}
				cout<<"success"<<endl;
				flag=1;
				break;
			}
			//1.fill A
			W[0]=now.a,W[1]=now.b;
			fill(0);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="fill A";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			
			//2.fill B
			W[0]=now.a,W[1]=now.b;
			fill(1);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="fill B";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			
			//3.empty A
			W[0]=now.a,W[1]=now.b;
			empty(0);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="empty A";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			
			//4.empty B
			W[0]=now.a,W[1]=now.b;
			empty(1);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="empty B";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			
			//5.pour A B
			W[0]=now.a,W[1]=now.b;
			pour(0,1);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="pour A B";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			
			//5.pour B A
			W[0]=now.a,W[1]=now.b;
			pour(1,0);
			if(book[W[0]][W[1]]==0){
				pre[k]=now.k;
				action[k]="pour B A";
				next.a=W[0];
				next.b=W[1];
				next.k=k++;
				q.push(next);
				book[W[0]][W[1]]=1;
			}
			q.pop();
		}
//		if(flag==0) cout<<"No"<<endl;
//		cout<<endl;
	}
	return 0;
}