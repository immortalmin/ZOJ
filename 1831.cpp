#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	cout<<s2<<endl<<s1<<endl;
	while(getline(cin,s3)){
		for(int i=0;i<s3.size();i++){
			for(int j=0;j<s1.size();j++){
				if(s3[i]==s1[j]){
					s3[i]=s2[j];
					break;
				}
			}
		}
		cout<<s3<<endl;
	}
	
	return 0;
}