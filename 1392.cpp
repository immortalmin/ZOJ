#include<iostream>
#include<cstring>
#include<string> 
#include<map>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
char conv(char c){
	if(!(c>='A'&&c<='Z')) return c;
	if(c>='F'&&c<='Z') return char(c-5);
	else return char(c+21);
}
int main(){
//	freopen("1.txt","r",stdin);
	string s;
	while(getline(cin,s)){
		if(s=="ENDOFINPUT") break;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			s[i]=conv(s[i]);
		}
		cout<<s<<endl;
		getline(cin,s);
	}
	return 0;
}