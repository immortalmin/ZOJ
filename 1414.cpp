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
int dir[4][2]={{1,1},{1,-1},{1,1},{-1,1}};
short int a[5505][5505];
int main() {
//	freopen("1.txt","r",stdin);
	int x=0,y=0,k=0,sum=1;
	memset(a,0,sizeof(a));
	while(true){
		if(k==4) k=0;
		x+=dir[k][0],y+=dir[k][1];
		k++;
//		cout<<x<<" "<<y<<endl;
		if(x>5000||y>5000||x<0||y<0) break;
		a[x][y]=sum++;
	}
	int n;
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x==0&&y==0){
			cout<<0<<endl;
			continue;
		}
		if(a[x][y]!=0){
			cout<<a[x][y]<<endl;
		}else{
			cout<<"No Number"<<endl;
		}
	}
	return 0;
}
//1414 1514 1698 1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 
//1062 1129 