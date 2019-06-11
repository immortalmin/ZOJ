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
//	freopen("1.txt","r",stdin);
	int n;
	printf("# Cards  Overhang\n");
	while(cin>>n){
		double sum=0;
		int k=2;
		for(int i=1;i<=n;i++){
			sum+=1/double(k*i);
		}
		printf("%5d     %.3lf\n",n,sum);
	}
	return 0;
}
//12345678901234567 
//# Cards  Overhang 
//    1     0.500 
//    2     0.750 
//    3     0.917 
//    4     1.042 
//   30     1.997