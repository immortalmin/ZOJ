#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Info{
	int sum;
	string name;
}info;
vector<Info>v;
bool mysort(Info a,Info b){
	return a.sum<b.sum;
}
int main(){
//	freopen("1.txt","r",stdin);
	int n;
	while(~scanf("%d",&n)){
		if(n==-1) break;
		v.clear();
		int a,b,c;
		string s;
		for(int i=1;i<=n;i++){
			cin>>a>>b>>c>>s;
			info.sum=a*b*c;
			info.name=s;
			v.push_back(info);
		}
		sort(v.begin(),v.end(),mysort);
		cout<<v[v.size()-1].name<<" took clay from "<<v[0].name<<"."<<endl;
	}
	return 0;
}