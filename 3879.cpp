#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>
#include<cmath>
#define maxn 105
#define ESP 1e-5
using namespace std;
struct name{
    int id;
    double sum;
    int ranks;
}q[maxn];
bool vis[maxn][maxn][maxn];
bool cmp(name a,name b){
    return a.sum>b.sum;
}
bool cmp2(name a,name b){
    return a.id<b.id;
}
int main()
{
//    freopen("1.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
        int n,Q,c;
        double s;
        scanf("%d%d%lf%d",&n,&Q,&s,&c);
        for(int i=1;i<=n;i++){
            q[i].id=i;
            q[i].ranks=1;
            q[i].sum=s;
        }
        while(c--){
            int A;
            memset(vis,0,sizeof(vis));
            scanf("%d",&A);
            for(int i=0;i<A;i++){
                int att,def,sef;
                scanf("%d%d%d",&att,&def,&sef);
                vis[att][def][sef]=1;
            }
            for(int i=1;i<=Q;i++){
                for(int j=1;j<=n;j++){
                    int cnt=0;
                    for(int k=1;k<=n;k++){
                        if(vis[k][j][i]) cnt++;
                    }
                    if(!cnt) continue;
                    q[j].sum-=n-1;
                    double add_scr=(n-1)*1.0/cnt;
                    for(int k=1;k<=n;k++){
                        if(vis[k][j][i]) q[k].sum+=add_scr;
                    }
                }
            }
            for(int i=1;i<=Q;i++){
                vector<int> one;
                vector<int> zero;
                for(int j=1;j<=n;j++){
                    int tmp;
                    scanf("%d",&tmp);
                    if(tmp) one.push_back(j);
                    else zero.push_back(j);
                }
                double mins=0;
                for(int j=0;j<zero.size();j++){
                    q[zero[j]].sum-=n-1;
                    mins+=n-1;
                }
                mins=1.0*mins/one.size();
                for(int j=0;j<one.size();j++){
                    q[one[j]].sum+=mins;
                }
            }
            int U;
            scanf("%d",&U);
            sort(q+1,q+1+n,cmp);
            q[1].ranks=1;
            int rankp=1;
            for(int i=2;i<=n;i++){
                rankp++;
                if(q[i-1].sum-q[i].sum<=ESP){
                    q[i].ranks=q[i-1].ranks;
                }
                else q[i].ranks=rankp;
            }
            sort(q+1,q+1+n,cmp2);
            while(U--){
                int x;
                scanf("%d",&x);
                printf("%.8f %d\n",q[x].sum,q[x].ranks);
            }
        }
    }
    return 0;
}