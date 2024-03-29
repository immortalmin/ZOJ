#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
struct Info{
	string name;
	int solve,time;
}info;
vector<Info>v;
bool mysort(Info a,Info b){
	if(a.solve!=b.solve) return a.solve>b.solve;
	else return a.time<b.time;
}
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		string name;
		int a,b;
		cin>>name;
		info.name=name;
		info.solve=0;
		info.time=0;
		for(int i=0;i<4;i++){
			cin>>a>>b;
			if(b==0) continue;
			info.solve++;
			info.time+=(a-1)*20+b;
		}
		v.push_back(info);
	}
	sort(v.begin(),v.end(),mysort);
	cout<<v[0].name<<" "<<v[0].solve<<" "<<v[0].time<<endl;
//	for(int i=0;i<v.size();i++){
//		cout<<v[i].name<<" "<<v[i].solve<<" "<<v[i].time<<endl;
//	}
	return 0;
} 
//1764、   2201、   3809、   2208、   3875、   1712、   2482、   2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、    