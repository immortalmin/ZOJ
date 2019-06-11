#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
long long int mult(long long int n){
	if(n==0) return 0;
	long long int sum=1;
	for(int i=2;i<=n;i++) sum+=i;
	return sum;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		long long int n;
		cin>>n;
		if(n==1||n==2){
			cout<<0<<endl;
		}else if(n%2==0){
			cout<<2*mult(n/2-1)<<endl;
		}else{
			cout<<mult(n/2-1)+mult(n/2)<<endl;
		}
	}
	return 0;
}
//1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、