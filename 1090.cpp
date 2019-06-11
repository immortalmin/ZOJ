#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
#define PI 3.141592653589793
int main() {
//	freopen("1.txt","r",stdin);
	double x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		double a,b,c,d;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		d=2*a*b*c/(sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c)))*PI;
		printf("%.2lf\n",d);
	}
	return 0;
}
//1090 1129 1278 1392 1403 1414 1514 1698 1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 
//1062 