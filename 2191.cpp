#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin);
	int f0,f1,f2,a,b,c;
	while(cin>>f0>>f1>>f2) {
		a=(f2-2*f1+f0)/2;
		b=f1-a-f0;
		c=f0;
		cout<<9*a+3*b+c<<" "<<16*a+4*b+c<<" "<<25*a+5*b+c<<endl;
	}

	return 0;
}
//2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、