#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	double a,b,r1,r2;
	while(cin>>a>>b>>r1>>r2){
		double dist=sqrt(pow(abs(r1-(a-r2)),2)+pow(abs(r1-(b-r2)),2));
		if((r1+r2)<=dist+0.01) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}