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
struct Info{
    int a,b,c;
}info;
vector<Info>v;
int main()
{
//    freopen("1.txt","r",stdin);
    for(int i=0;i<16;i++){
        cin>>info.a>>info.b>>info.c;
        v.push_back(info);
    }
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==-1&&b==-1&&c==-1) break;
        double minn=1000000,dist;
        int k;
        for(int i=0;i<16;i++){
            dist=sqrt((v[i].a-a)*(v[i].a-a)+(v[i].b-b)*(v[i].b-b)+(v[i].c-c)*(v[i].c-c));
            if(dist<minn){
                minn=dist;
                k=i;
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",a,b,c,v[k].a,v[k].b,v[k].c);
    }
    return 0;
}

