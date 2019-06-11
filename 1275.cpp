#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int book[10],book2[10];
string addone(string s){//字符串加1 
	int k=s.size()-1;
	while(true){
		if(k==-1){
			s='1'+s;
			break;
		}
		if(s[k]=='9'){ 
			s[k]='0';
			k--;
		}else{
			s[k]+=1;
			break;
		}
	}
	return s;
}
bool judge2(string s){
	memset(book2,0,sizeof(book2));
	for(int i=0;i<s.size();i++){
		if(book2[int(s[i]-48)]==1) return false;
		book2[int(s[i]-48)]=1;
	}
	return true;
}
bool judge(string s){//判断该字符串是否正确 
	int k=0,len1=s.size(),len2=s.size(),a;
	book[0]=1;
	while(len1--){
		a=int(s[k]-48);
		k=(k+a)%len2;
//		cout<<s[k]<<" "<<len1<<endl;
		if(book[k]==1){//如果这个点已经走过 
			if(k==0&&len1==0) return true;//如果这个点是第一个且 
			else return false;
		}
		book[k]=1;
	}
	return true;
}
int main(){
//	freopen("1.txt","r",stdin);
	string s;
	int k=0;
	while(cin>>s){
		if(s=="0") break;
		k++;
		while(true){
			memset(book,0,sizeof(book));
			while(!judge2(s)){
				s=addone(s);
			}
			if(judge(s)){
				cout<<"Case "<<k<<": "<<s<<endl;
				break;
			}
			s=addone(s);
		} 
	}
	return 0;
}