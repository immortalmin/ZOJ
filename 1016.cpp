#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T,book[1000];
	scanf("%d",&T);
	while(T--){
		int n,a[30],sum1=0;
		scanf("%d",&n);
		string s="";
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			for(int j=sum1;j<a[i];j++){
				s+='(';
			}
			sum1=a[i];
			s+=')';
		}
//		cout<<s<<endl;
		memset(book,0,sizeof(book));
		int flag=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==')'){
				if(flag==1) printf(" ");
				flag=1;
				int sum2=1;
				for(int j=i-1;j>=0;j--){
					if(s[j]=='('&&book[j]==0){
						book[j]=1;
						printf("%d",sum2);
						break;
					}else if(s[j]=='('&&book[j]==1){
						sum2++;
					}
					
				}
			}
		}
		printf("\n");
	}
	
	
	return 0;
}