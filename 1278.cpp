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
map<int,int>mm;
int main() {
//	freopen("1.txt","r",stdin);
	int Z,I,M,L,c=0;
	while(cin>>Z>>I>>M>>L){
		c++;
		mm.clear();
		if(Z==0&&I==0&&M==0&&L==0) break;
		mm[L]=1;
		int k=1;
		while(true){
			L=(Z*L+I)%M;
			k++;
			if(mm[L]!=0){
				printf("Case %d: ",c);
				cout<<k-mm[L]<<endl;
				break;
			}else{
				mm[L]=k;
			}
		}
	}
	return 0;
}
//1278 1392 1403 1414 1514 1698 1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 
//1062 1129 