#include<iostream>
using namespace std;
int n,flag;
int a[200];
void dfs(int len,int k){
//	cout<<k<<endl;
	if(flag==1) return ;
	if(len>100) return ;
	if(k==0){
		flag=1;
		for(int i=0;i<len;i++){
			cout<<a[i];
		}
		cout<<endl;
		return ;
	}
	a[len]=0;
	dfs(len+1,(k*10)%n);
	a[len]=1;
	dfs(len+1,(k*10+1)%n);
	return ;
}
int main(){
//	freopen("1.txt","r",stdin);
	while(cin>>n){
		if(n==0) break;
//		cout<<n<<endl;
		flag=0;
		a[0]=1;
		dfs(1,1);
	}
	return 0;
} 