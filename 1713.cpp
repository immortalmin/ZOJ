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
int cal(string s) {
	int flag=0,sum=0;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') {
			if(flag==1) continue;
			else {
				sum++;
				flag=1;
			}
		} else flag=0;
	}
	return sum;
}
int main() {
//	freopen("1.txt","r",stdin);
	string s;
	while(getline(cin,s)) {
		if(s=="e/o/i") break;
		s+='/';
		int sum[3],k=0;
		memset(sum,0,sizeof(sum));
		string ss="";
		for(int i=0; i<s.size(); i++) {
			if(s[i]!=' '&&s[i]!='/') ss+=s[i];
			else {
//				cout<<ss<<" ";
				sum[k]+=cal(ss);
				ss="";
				if(s[i]=='/') k++;
			}
		}
		if(sum[0]==5&&sum[1]==7&&sum[2]==5) cout<<"Y"<<endl;
		else {
			if(sum[0]!=5) cout<<1<<endl;
			else if(sum[1]!=7) cout<<2<<endl;
			else if(sum[2]!=5) cout<<3<<endl;
		}

	}
	return 0;
}
//1713 1716 1760 1796 1813 1883 1893 1904 1928 1949 2486 2545 2548 2559 2679 2730 2795 2965 2969 2976 2987 2988 3124 3182 3202 3323 3479 3776 3819 3827 3869
//1062 1129