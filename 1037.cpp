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
    int T,k=0;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;

//        if(k!=0) cout<<endl;
        cout<<"Scenario #"<<++k<<":"<<endl;
        if(n%2!=0&&m%2!=0) printf("%.2lf\n\n",double(n*m)-1+sqrt(2));
        else printf("%.2lf\n\n",double(n*m));
    }

    return 0;
}
