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
	int n;
	while(cin>>n&&n){
		string s;
		int a[7]={0,1,2,4,5,3,6},b[7];
		for(int i=0;i<n;i++){
			cin>>s;
			if(s=="north"){
				b[2]=a[1],b[1]=a[4],b[4]=a[6];
				b[6]=a[2],b[5]=a[5],b[3]=a[3];
			}else if(s=="south"){
				b[1]=a[2],b[4]=a[1],b[6]=a[4];
				b[2]=a[6],b[5]=a[5],b[3]=a[3];
			}else if(s=="west"){
				b[5]=a[1],b[1]=a[3],b[3]=a[6];
				b[6]=a[5],b[2]=a[2],b[4]=a[4];
			}else{
				b[3]=a[1],b[1]=a[5],b[5]=a[6];
				b[6]=a[3],b[2]=a[2],b[4]=a[4];
			}
			for(int j=1;j<=6;j++) a[j]=b[j];
		}
		cout<<a[1]<<endl;
	}
	
	return 0;
}
//1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、2185、   