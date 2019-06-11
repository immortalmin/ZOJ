#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int a,minn=0,maxn=11;
	string s;
	while(cin>>a){
		if(a==0) break;
		getline(cin,s);
		getline(cin,s);
		if(s=="too high"){
			if(a<maxn) maxn=a;
		}else if(s=="too low"){
			if(a>minn) minn=a;
		}else{
//			cout<<minn<<" "<<maxn<<endl;
			if(maxn<=minn+1||a>=maxn||a<=minn) cout<<"Stan is dishonest"<<endl;
			else cout<<"Stan may be honest"<<endl;
			minn=0,maxn=11; 
		}
	}
	
	return 0;
}