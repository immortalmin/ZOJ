#include<iostream>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T,a;
	cin>>T;
	while(T--){
		cin>>a;
		for(int i=a;;i++){
			if(i%7==0&&i%4!=0){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
} 