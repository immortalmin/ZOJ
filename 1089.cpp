#include<iostream>
#include<cstring>
#include<string> 
#include<map>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int a[100],b[100],k,book[100];
void dfs(int step){
	if(step==7){
		for(int i=1;i<=6;i++){
			if(i!=1) cout<<" ";
			cout<<b[i];
		}
		cout<<endl;
		return ;
	}
	for(int i=1;i<=k;i++){
		if(book[i]==0&&a[i]>b[step-1]){
			book[i]=1;
			b[step]=a[i];
			dfs(step+1);
			book[i]=0;
		}
	}
	return ;
}
int main(){
//	freopen("1.txt","r",stdin);
	int kk=0;
	while(cin>>k){
		if(k==0) break;
		memset(book,0,sizeof(book));
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		kk++;
		if(kk!=1) cout<<endl;
		dfs(1);
	}
	return 0;
}