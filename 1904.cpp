#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<vector>
#include<math.h> 
#define M_PI 3.14159265358979323846
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	double D,V,d;
	while(cin>>D>>V){
		if(D==0&&V==0) break;
		printf("%.3lf\n",pow(pow(D,3)-((6*V)/M_PI),1.0/3));
	}
	return 0;
}