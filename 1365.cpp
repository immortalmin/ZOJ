#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<map>
#include<queue>
#include<vector>
using namespace std;
int main() {
//	freopen("1.txt","r",stdin);
	string s1,s2;
	int flag=0;
	int a;
	char c;
	while(true) {
		int sum=0;
		while(cin>>s1) {
			if(s1[0]=='0') break;
			else if(s1[0]=='#'){
				flag=1;
				break;
			}
			cin>>s2>>a>>c;
			if(c=='F') sum+=a*2;
			else if(c=='B') sum+=a*3/2;
			else{
				if(a<500) a=500;
				sum+=a;
			}
		}
		if(flag==1) break;
		cout<<sum<<endl;
	}

	return 0;
}