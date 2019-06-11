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
# define maxn 100005
struct Info{
	double x,y;
}a[maxn]; 
vector<int>v;
int n;
bool mysort1(Info a,Info b){
	return a.x<b.x;
}
bool mysort2(int a1,int a2){
	return a[a1].y<a[a2].y;
}
double cal(int a1,int a2){
	return sqrt((a[a1].x-a[a2].x)*(a[a1].x-a[a2].x)+(a[a1].y-a[a2].y)*(a[a1].y-a[a2].y))/2.0;
}
double mind(int l,int r){
	if(l>=r) return 1e10;
	int mid=(l+r)>>1;
	double minn=min(mind(l,mid),mind(mid+1,r));
	v.clear();
	for(int i=mid;i>=l;i--){
		if(a[mid].x-a[i].x<minn) v.push_back(i);
		else break;
	}
	for(int i=mid+1;i<=r;i++){
		if(a[i].x-a[mid].x<minn) v.push_back(i);
		else break;
	}
	sort(v.begin(),v.end(),mysort2);
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(a[v[j]].y-a[v[i]].y<minn) minn=min(minn,cal(v[i],v[j]));
			else break;
		}
	}
//	cout<<minn<<endl;
	return minn;
}
int main(){
//	freopen("1.txt","r",stdin);
	while(cin>>n&&n){
		for(int i=0;i<n;i++){
			cin>>a[i].x>>a[i].y;
		}
		sort(a,a+n,mysort1);
//		for(int i=0;i<n;i++){
//			cout<<a[i].x<<" "<<a[i].y<<endl;
//		}
		printf("%.2lf\n",mind(0,n-1));
//		cout<<endl;
	}
	return 0;
}
