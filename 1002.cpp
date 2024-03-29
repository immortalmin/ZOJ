#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
using namespace std;
int n,maxn=-1;
char mmap[10][10],book[10][10];
bool judge(int x,int y){
    for(int i=0;i<x;i++){
        if(mmap[i][y]=='X') break;
        else if(book[i][y]==1) return false;
    }
    for(int i=x+1;i<n;i++){
        if(mmap[i][y]=='X') break;
        else if(book[i][y]==1) return false;
    }
    for(int i=0;i<y;i++){
        if(mmap[x][i]=='X') break;
        else if(book[x][i]==1) return false;
    }
    for(int i=y+1;i<n;i++){
        if(mmap[x][i]=='X') break;
        else if(book[x][i]==1) return false;
    }
    return true;
}
void dfs(int step,int sum){
    if(sum>maxn) maxn=sum;
    if(step>=n*n+1){
        return ;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mmap[i][j]=='.'&&book[i][j]==0&&judge(i,j)){
                book[i][j]=1;
                dfs(step+1,sum+1);
                book[i][j]=0;
            }
        }
    }
    return ;
}
int main()
{
//    freopen("1.txt","r",stdin);

    while(cin>>n){
        if(n==0) break;
        maxn=-1;
        memset(book,0,sizeof(book));
        for(int i=0;i<n;i++){
            scanf("%s",mmap[i]);
        }
        dfs(0,0);
        cout<<maxn<<endl;
    }

    return 0;
}
