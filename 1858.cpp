#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
map<char,int>mm;
int main(){
//	freopen("1.txt","r",stdin);
	mm['B']=1,mm['F']=1,mm['P']=1,mm['V']=1;
	mm['C']=2,mm['G']=2,mm['J']=2,mm['K']=2,mm['Q']=2,mm['S']=2,mm['X']=2,mm['Z']=2;
	mm['D']=3,mm['T']=3;
	mm['L']=4;
	mm['M']=5,mm['N']=5;
	mm['R']=6;
	string s;
	while(cin>>s){
		int before=0,now;
		for(int i=0;i<s.size();i++){
			now=mm[s[i]];
			if(now!=0){
				if(now!=before) cout<<now;
			}
			before=now;
		}
		cout<<endl;
	}
	return 0;
}