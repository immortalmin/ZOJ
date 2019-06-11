#include <iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
using namespace std;
map<int,char>m1;//十六进制数字转字符
int sum16(int n){
    int sum=0;
    int a;
    while(n){
        a=n%16;
        n/=16;
        sum+=a;
    }
    return sum;
}
int sum12(int n){
    int sum=0;
    int a;
    while(n){
        a=n%12;
        n/=12;
        sum+=a;
    }
    return sum;
}
int sum10(int n){
    int sum=0;
    int a;
    while(n){
        a=n%10;
        n/=10;
        sum+=a;
    }
    return sum;
}
int main()
{
//    freopen("1.txt","r",stdin);
    int n;
    for(int i=1000;i<10000;i++){
        if(sum10(i)==sum12(i)&&sum10(i)==sum16(i)) cout<<i<<endl;
    }
    return 0;
}
