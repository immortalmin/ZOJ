#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string> 
#include<map>
#include<queue>
#include<vector>
using namespace std;
string sa,sb;
string pu(string s,char c){//push
	return s+c;
}
string po(string s){//pop
	return s.substr(0,s.size()-1);
}
bool judge(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=sb[i]) return false;
	}
	return true;
}
bool judge2(string s1,string s2){
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1==s2) return true;
	return false;
}
//      当前栈中的元素/已经组成的字符串/原字符串轮到的下标 
void dfs(string s1,string s2,int a,string book){
	//判断当前部分是否符合
	if(!judge(s2)) return; 
	if(s2==sb){
		for(int i=0;i<book.size();i++){
			cout<<book[i]<<" ";
		}
		cout<<endl;
//		cout<<book<<endl;
		return ;
	}
	//push
	if(a<sa.size()) dfs(s1+sa[a],s2,a+1,book+'i');
	//pop
	if(s1.size()>0) dfs(po(s1),s2+s1[s1.size()-1],a,book+'o');
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>sa>>sb){
		if(!judge2(sa,sb)){
			cout<<"["<<endl<<"]"<<endl;
			continue;
		}
		cout<<"["<<endl;
		dfs("","",0,"");
		cout<<"]"<<endl;
		
	}
	return 0;
}