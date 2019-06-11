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
#include<stack>
using namespace std;
struct Info {
	int x,y;
} info;
vector<Info>v;
stack<Info>s;
map<char,int>mm;
/*
s.push(X) 入栈
s.pop() 删除栈顶元素
s.top() 返回栈顶元素
s.empty() 判断栈是否为空
s.size() 返回栈的长度
*/
map<int,int>m2;
vector<int>v2;
int cal(Info a,Info b) {
	m2.clear();
	v2.clear();
	int count=0;
	if(m2[a.x]==0) {
		m2[a.x]=1;
		v2.push_back(a.x);
		count++;
	}
	if(m2[a.y]==0) {
		m2[a.y]=1;
		v2.push_back(a.y);
		count++;
	}
	if(m2[b.x]==0) {
		m2[b.x]=1;
		v2.push_back(b.x);
		count++;
	}
	if(m2[b.y]==0) {
		m2[b.y]=1;
		v2.push_back(b.y);
		count++;
	}
	if(count==3) {
		int sum=0;
		sum=v2[0]*v2[1]*v2[2];
		return sum;
	} else return -1;
}
Info retu(Info a,Info b) {
	Info c;
	if(a.x==b.x) {
		c.x=a.y;
		c.y=b.y;
	} else if(a.x==b.y) {
		c.x=a.y;
		c.y=b.x;
	} else if(a.y==b.x) {
		c.x=a.x;
		c.y=b.y;
	} else if(a.y=b.y) {
		c.x=a.x;
		c.y=b.x;
	}
	return c;
}
int main() {
//	freopen("1.txt","r",stdin);
	int n;
	char c;
	cin>>n;
	v.clear();
	for(int i=0; i<n; i++) {
		cin>>c>>info.x>>info.y;
		v.push_back(info);
		mm[c]=v.size();
	}
	string ss;
	Info a,b;
	while(cin>>ss) {
		while(!s.empty()) s.pop();
		int sum=0,flag=0;
		for(int i=0; i<ss.size(); i++) {
			if(ss[i]==')') {
//				if(s.size()==0){
//					flag=1;
//					break;
//				}
				a=s.top();
				s.pop();
				b=s.top();
				s.pop();
				if(a.x!=b.y){
					flag=1;
					break;
				}else{
					Info c;
					c.x=b.x;
					c.y=a.y;
					sum+=b.x*b.y*a.y;
					s.push(c);
				}
//				int res=cal(a,b);
//				if(res==-1) {
//					flag=1;
//					break;
//				} else {
//					sum+=res;
//					s.push(retu(a,b));
//				}
			} else if(ss[i]!='(') {
				s.push(v[mm[ss[i]]-1]);
			}
		}
		if(flag==1) cout<<"error"<<endl;
		else {
			cout<<sum<<endl;
		}
	}
	return 0;
}