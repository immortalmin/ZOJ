#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>
#include<set>
using namespace std;
bool a=false,b=false;
void dfs(int A,int B,int c){
	if(B==1){
		b=true;
		if(A==1) a=true;
	}
	if(a&&b||c>100) return;
	if(A%c==0){
		dfs(A/c,B,c+1);
	}
	if(B%c==0){
		dfs(A,B/c,c+1);
	}
	dfs(A,B,c+1);
}
int main() {
//	freopen("1.txt","r",stdin);
	int A,B,t;
	while(cin>>A>>B){
		a=false,b=false;
		if(B>A){
			t=B;
			B=A;
			A=t;
		}
		dfs(A,B,2);
		if(b&&!a) cout<<B<<endl;
		else cout<<A<<endl;
	} 
	return 0;
}
