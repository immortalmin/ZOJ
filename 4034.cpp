#include<iostream>
#include<map>
#include<cstdio> 
using namespace std;
map<char,int>mm;
int main() {
//	freopen("1.txt","r",stdin);
	mm['C']=0;
	mm['B']=1;
	mm['D']=2;
	int T;
	cin>>T;
	while(T--) {
		int n,m,a,aa[100010];
		cin>>n>>m;
		char c[10];
		int flag=0,sum,index=-1;
		aa[n]=m*3+1;
		for(int i=0; i<n; i++) {
			scanf("%s",c);
			if(c[0]!='W') {
				scanf("%d",&a);
				aa[i]=mm[c[0]]*m+a;
			} else {
				index=i;
			}
		}
		if(n==1){
			sum=3*m;
		}else{
			if(index==-1){
				if(aa[0]>aa[1]) sum=1;
				else sum=3*m-n+1;
			}else{
				if(index==0) sum=aa[1]-1;
				else{
					if(aa[0]>aa[1]&&index!=1) sum=1;
					else{
						sum=aa[index+1]-aa[index-1]-1;
						if(index==1) sum++;
					}
				}
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}