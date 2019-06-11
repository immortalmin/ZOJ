#include<iostream>
#include<cstring>
#include<string> 
#include<map>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	string s;
	char c[110][110],cc;
	while(cin>>n){
		if(n<0) break;
		int sum1=0,sum2=0;
		for(int i=1;i<=n;i++){
			int k=0;
			cin>>c[i]+1;
			for(int j=1;j<=n;j++){
				if(c[i][j]=='*'&&k==0){
					if(j%2==0&&i%2!=0){
						sum1+=(i/2+1);
						sum2+=(i/2+1);
					}
					else{
						sum1+=i/2;
						sum2+=i/2;
					}
					k=1;
				}else if(c[i][j]=='@'&&k==0){
					if(j%2!=0&&i%2!=0){
						sum1+=(i/2+1);
						sum2+=(i/2+1);
					}
					else{
						sum1+=i/2;
						sum2+=i/2;
					}
					k=1;
				}
			}
			if(k==0){
				if(i%2!=0){
					sum1+=(i/2+1);
					sum2+=i/2;
				}else{
					sum1+=i/2;
					sum2+=i/2;
				}
			}
		}
		cout<<sum1<<" "<<sum2<<endl;
	}
	return 0;
}