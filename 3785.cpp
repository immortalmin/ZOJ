#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
char str[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
string flag="015414556046066020160015630660146566024506604303445635655616056604526556035455613465563262334524544505645563415445624344502354452151223413433464534452304334513233461243341040112302322353423341263223402122350132230636001261211242312230152112361011246021126525660150100131201126041001250600135610";
int main(){
//	freopen("1.txt","r",stdin);
//	freopen("1.txt","w",stdout);
//	int SUM=0;
//	for(int i=1;i<=294;i++){
//		int sum=i;
//		for(int j=1;j<i;j++){
//			sum=sum*i%7; 
//		}
//		SUM+=sum;
//		cout<<SUM%7;
////		if(i%40==0)cout<<endl;
//	}
//	cout<<flag.size();
	int T;
	scanf("%d",&T);
	while(T--){
		long long int n;
		scanf("%lld",&n);
		int k=flag[n%294]-'0';
		printf("%s\n",str[k]);
	}
}