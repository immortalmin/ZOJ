#include<iostream>
#include<string>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--){
		string s,ss="";
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='y'||s[i]=='o'||s[i]=='u'){
				if(i!=0) continue;
			}
			ss+=s[i];
		}
		cout<<ss<<endl;
	}
	return 0;
} 