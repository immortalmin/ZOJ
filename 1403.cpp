#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n,book[15],a[5];
string s;
int res[5],flag;
bool judge(){
	if(a[0]-pow(a[1],2)+pow(a[2],3)-pow(a[3],4)+pow(a[4],5)==n) return true;
	return false;
}
void dfs(int step){
	if(step==5){
		if(judge()){
			for(int i=0;i<5;i++) res[i]=a[i];
			flag=1;
		}
		return ;
	}
	for(int i=0;i<s.size();i++){
		if(book[i]==0){
			book[i]=1;
			a[step]=int(s[i]-64);
			dfs(step+1);
			book[i]=0;
		}
	}
	return ;
}
int main() {
//	freopen("1.txt","r",stdin);
	while(cin>>n>>s){
		if(n==0&&s=="END") break;
		sort(s.begin(),s.end());
		memset(book,0,sizeof(book));
		flag=0;
		dfs(0);
		if(flag==1){
			for(int i=0;i<5;i++){
				cout<<char(res[i]-1+'A');
			}
			cout<<endl;
		}else{
			cout<<"no solution"<<endl;
		}
	}
	return 0;
}
//1403 1414 1514 1698 1709 1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869 
//1062 1129 