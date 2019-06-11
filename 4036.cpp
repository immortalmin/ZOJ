#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<cstdio>
#include<map>
#include<queue>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		int n,b,a[105],flag=0;
		cin>>n>>b;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if((a[i]+b)%7==0){
				flag=1;
			}
		}
		if(flag==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
	return 0;
}
//4036、   1944、
