#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
#define PI 3.1415927
int main() {
//	freopen("1.txt","r",stdin);
	double dia,time;
	int revo,k=1;
	while(scanf("%lf%d%lf",&dia,&revo,&time)){
		if(revo==0) break;
		printf("Trip #%d: %.2lf %.2lf\n",k++,PI*dia*revo/12/5280,PI*dia*revo/12/5280*(3600/time));
	}
	return 0;
}