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
	int price;
}info;
vector<Info>v;
vector<string>v2;
bool mysort(Info a,Info b){
	return a.price<b.price;
}
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		v2.clear();
		int a[3];
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		string name;
		int price,sum=0;
		for(int i=0;i<3;i++){
			v.clear();
			for(int j=0;j<a[i];j++){
				cin>>info.name>>info.price;
				v.push_back(info);
			}
			sort(v.begin(),v.end(),mysort);
			int len=v.size()/2+1;
			sum+=v[len-1].price;
			v2.push_back(v[len-1].name);
		}
		cout<<sum;
		for(int i=0;i<v2.size();i++){
			cout<<" "<<v2[i];
		}
		cout<<endl;
	}
	return 0;
} 
//3875、   1712、   2482、   2191、   3210、   1495、   1350、   1494、   2773、   1730、   2185、   1902、   3958、   3767、   1667、   1402、   2172、   1239、   1503、   3322、   1799、   2932、   3328、   1814、   2417、   1652、   1425、   3610、   1342、   3179、   1671、   2165、   4036、   1944、
//3313、   2670、  1666、    