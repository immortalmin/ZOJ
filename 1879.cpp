#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n,a[3100],book[3100],flag;
	while(cin>>n){
		memset(book,0,sizeof(book));
		flag=0;
		cin>>a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			int c=abs(a[i]-a[i-1]);
			book[c]++;
			if(book[c]>1||c>=n) flag=1;
		}
		if(flag==0) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
	}
	return 0;
} 