#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		int n,a[2000];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int maxn=-1,sum,k=n;
		for(int i=0;i<n;i++){
			sum=k*a[i];
			if(sum>maxn) maxn=sum;
			k--;
		}
		cout<<maxn<<endl;
	}
	return 0;
} 
//2488、   1764、   2201、   3809、   2208、   3875、   1712、   2482、   2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、    