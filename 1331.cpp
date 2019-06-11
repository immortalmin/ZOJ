#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<map>
#include<queue>
#include<vector>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin)
	for(int a=2; a<=200; a++) {
		for(int b=2; b<a; b++) {
			for(int c=b+1; c<a; c++) {
				for(int d=c+1; d<a; d++) {
					if(a*a*a==b*b*b+c*c*c+d*d*d){
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
					}
				}
			}
		}
	}
	return 0;
}