#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int conv(string s){
	int sum=0;
	for(int i=0;i<s.size()-1;i++){
		sum=sum*10+int(s[i]-48);
	}
	return sum;
}
int main(){
//	freopen("1.txt","r",stdin);
	int T,n;
	cin>>T;
	string s;
	getline(cin,s);
	while(T--){
		getline(cin,s);//去除输入块间的空行 
		while(cin>>n&&n){
			long long int sum=0,k1=1,k2=0;
			for(int i=1;i<=n;i++){
				sum+=k1;
				k2++;
				if(k2==k1){
					k1++;
					k2=0;
				}
			}
			cout<<n<<" "<<sum<<endl;
		}
//		cout<<"T:"<<T<<endl;
		if(T!=0){
//			cout<<"!"<<endl;
			cout<<endl;
		}
	}
//	cout<<"!"<<endl;
	return 0;
} 