#include<iostream>
#include<cstdio>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n,r;
	while(~scanf("%d%d",&n,&r)){
		if(n==0&&r==0) break;
		int a[100],b[100],p,c;
		for(int i=1;i<=n;i++) a[i]=n+1-i;
		for(int i=0;i<r;i++){
			scanf("%d%d",&p,&c);
			int t=1;
			for(int j=p;j<=p+c-1;j++) b[t++]=a[j];
			for(int j=1;j<=p-1;j++) b[t++]=a[j];
			for(int j=p+c;j<=n;j++) b[t++]=a[j];
			for(int j=1;j<=n;j++) a[j]=b[j];
		}
		printf("%d\n",a[1]);
	}
	return 0;
} 
//2164、   4023、   3936、   3333、   3957、   3100、   1070、   3313、   2670、   2186、   1666、   2405、   2488、   1764、   2201、   3809、   2208、   3875、   1712、   2482、   2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
