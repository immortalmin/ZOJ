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
	int n,a[200];
	while(scanf("%d",&n)){
		if(n==0) break;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int k=n,k2=0;
		for(int i=1;i<=n;i++){
			if(a[i]<k) k=a[i];
			k--;
			if(k==0){
				k2=i;
				break;
			}
		}
		cout<<n-k2<<endl;
	}
	return 0;
}
//1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、