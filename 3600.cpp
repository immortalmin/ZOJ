#include<iostream>//3600
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		double a,b,sum1=0,sum2=0;
		cin>>a>>b;
		if(a<=3){
			sum1=11;
			sum2=11;
		}else if(a<=10){
			sum1=11+(a-3)*2;
			sum2=11+(a-3)*2.5;
		}else{
			sum1=11+14+(a-10)*3;
			sum2=11+17.5+(a-10)*3.75;
		}
		sum1+=b*0.4;
		sum2+=b*0.625;
		int aa=int(sum1+=0.5);
		int bb=int(sum2+=0.5);
		printf("%d\n",bb-aa);
	}
	return 0;
}