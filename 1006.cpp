#include<iostream>
#include<map>
#include<string>
using namespace std;
map<char,int>m1;//字符转数字 
int main(){
//	freopen("1.txt","r",stdin);
	char plaintext[28];//数字转字符 
	plaintext[0]='_';
	m1['-']=0;
	for(int i=1;i<=26;i++){
		plaintext[i]=char('a'-1+i);
		m1[char('a'-1+i)]=i;
	}
	plaintext[27]='.';
	m1['.']=27;
	int n,k,a[100],b[100];
	string s;
	while(cin>>k){
		if(k==0) break;
		cin>>s;
		n=s.size();
		for(int i=0;i<s.size();i++){
			b[i]=m1[s[i]];
		}
		for(int i=0;i<n;i++){
			a[k*i%n]=(b[i]+i)%28;
		}
		for(int i=0;i<n;i++) cout<<plaintext[a[i]];
		cout<<endl;
	}
	
	return 0;
}