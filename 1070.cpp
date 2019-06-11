#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	double VS,R,C,w;
	int n;
	scanf("%lf%lf%lf%d",&VS,&R,&C,&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&w);
		printf("%.3lf\n",C*R*w*VS*sqrt(1/(1+(C*R*w)*(C*R*w))));
	}
	return 0;
} 
//1070、   3313、   2670、   2186、   1666、   2405、   2488、   1764、   2201、   3809、   2208、   3875、   1712、   2482、   2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
