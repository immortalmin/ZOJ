#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
using namespace std;
map<int,int>mm;
int a[500010];
int main()
{
//    freopen("1.txt","r",stdin);
    int n,maxn=-1;
    mm.clear();
    a[0]=0;
    for(int i=1;i<=500000;i++){
        a[i]=a[i-1]-i;
        if(a[i]<=0||mm[a[i]]==1) a[i]=a[i-1]+i;
        mm[a[i]]=1;
    }
    while(~scanf("%d",&n)&&n!=-1){
        cout<<a[n]<<endl;
    }
    return 0;
}
