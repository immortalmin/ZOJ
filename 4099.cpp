#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<cstdio>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
//	cin>>T;
	scanf("%d",&T);
	while(T--){
		long long int n;
		scanf("%lld",&n);
//		cin>>n;
		if(n%2==0) printf("4 %lld\n",4+n);//cout<<4<<" "<<4+n<<endl;
		else printf("9 %lld\n",9+n);// cout<<9<<" "<<9+n<<endl;
	}
	return 0;
}