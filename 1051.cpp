#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
//    freopen("1.txt","r",stdin);
    int T,k=0,a[30][30],c[30][30],b[16];
    cin>>T;
    while(T--){
        k++;
        memset(a,0,sizeof(a));
        int n;
        cin>>n;
        for(int i=0;i<16;i++) cin>>b[i];
//        for(int i=0;i<16;i++) cout<<b[i]<<" ";
        for(int i=1;i<=20;i++){
            for(int j=1;j<=20;j++){
                cin>>a[i][j];
            }
        }
        while(n--){
            for(int i=1;i<=20;i++){
                for(int j=1;j<=20;j++){
                    c[i][j]=b[a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]];
                }
            }
            for(int i=1;i<=20;i++){
                for(int j=1;j<=20;j++){
                    a[i][j]+=c[i][j];
                    if(a[i][j]<0) a[i][j]=0;
                    if(a[i][j]>3) a[i][j]=3;
                }
            }
        }
        int sum;
        char d[4]={'.','!','X','#'};
        if(k!=1) cout<<endl;
        for(int i=1;i<=20;i++){
            for(int j=1;j<=20;j++){
                cout<<d[a[i][j]];
//                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

