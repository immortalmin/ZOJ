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
#define PI 3.1415927
int main()
{
//    freopen("1.txt","r",stdin);
    int T,k=0;
    cin>>T;
    while(T--){
        double x,y,area=0;
        cin>>x>>y;
        for(int year=0;;year++){
            if(area*2/PI>x*x+y*y){
                printf("Property %d: This property will begin eroding in year %d.\n",++k,year);
                break;
            }else area+=50;
        }
    }
    cout<<"END OF OUTPUT."<<endl;
    return 0;
}
