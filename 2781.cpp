#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		if(s.size()==1){
			cout<<s<<endl;
			continue;
		}
		int k=0;
		for(int i=s.size()-1;i>=1;i--){
			if(int(s[i]-48)+k>=5) k=1;
			else k=0;
			s[i]='0';
		}
		if(k==1){
			if(s[0]=='9'){
				s[0]='0';
				s='1'+s;
			}else{
				s[0]=char(s[0]+k);
			}
		}
		cout<<s<<endl;
	}
	return 0;
}