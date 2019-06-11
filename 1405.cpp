#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<map>
#include<queue>
#include<vector>
using namespace std;
map<char,int>mm;
int main() {
//	freopen("1.txt","r",stdin);
	string s;
	int n;
	while(cin>>n&&n){
		cin>>s;
		mm.clear();
		int k=0,sum=0;
		for(int i=0;i<s.size();i++){
			if(mm[s[i]]==0){
				if(k<n){
					k++;
					mm[s[i]]=1;
				}else{
					sum++;
					mm[s[i]]=2;
				}
			}else if(mm[s[i]]==1){
				mm[s[i]]=2;
				k--;
			}else{
				continue;
			}
		}
		if(sum==0) cout<<"All customers tanned successfully."<<endl;
		else cout<<sum<<" customer(s) walked away."<<endl;
	}
	return 0;
}