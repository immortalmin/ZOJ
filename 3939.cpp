#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
#include<cstdio>
using namespace std;
//struct E{
//	int y,m,d;
//}e;
//struct Info{
//	int m,d;
//}info;
//vector<Info>v2;//保存周期
//vector<E>v;
int months[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool judge(int x) {
	if(x%400==0||x%4==0&&x%100!=0) return true;
	return false;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--) {
		long long int year,month,day,cnt;
		scanf("%lld%lld%lld%lld",&year,&month,&day,&cnt);
		year+=(cnt/2058)*400;
		long long int y=year,m=month,d=day;
		cnt=cnt%2058;
		long long int t=1;
		if(cnt==0) {
			y-=400;
			cnt=2058;
			while(1) {
				if(t==cnt)break;
				if(judge(y))months[2]=29;
				else months[2]=28;
				d+=7;
				if(d>months[m]) {
					d-=months[m];
					m++;
					if(m>12) {
						y++;
						m=1;
					}
				}
				if(d==1||d==11||d==21) {
					t++;
				}
			}
			printf("%lld %lld %lld\n",y,m,d);
		} else {
			while(1) {
				if(t==cnt)break;
				if(judge(y))months[2]=29;
				else months[2]=28;
				d+=7;
				if(d>months[m]) {
					d-=months[m];
					m++;
					if(m>12) {
						y++;
						m=1;
					}
				}
				if(d==1||d==11||d==21) {
					t++;
				}

			}
			printf("%lld %lld %lld\n",y,m,d);
		}
	}
	return 0;
}

//	freopen("2.txt","w",stdout);
//	int y=2016,m=1,d=11;
//	e.y=y,e.m=m,e.d=d;
//	v.push_back(e);
//	int book[20][50];
//	memset(book,0,sizeof(book));
//	while(y!=2045){
//		if(judge(y))months[2]=29;
//		else months[2]=28;
//		d+=7;
//		if(d>months[m]){
//			d-=months[m];
//			m++;
//			if(m>12){
//				y++;
//				m=1;
//			}
//		}
//		if(d==1||d==11||d==21){
//			e.y=y,e.m=m,e.d=d;
//			v.push_back(e);
//		}
//	}
//	int sum=0,flag=0;;
//	for(int i=0;i<v.size();i++){
//		if(v[i].y==2016&&v[i].m==1&&v[i].d==11){
//			flag=1;
//		}
//		if(v[i].y==2044&&v[i].m==1&&v[i].d==11){
//			break;
//		}
//		if(flag==1){
//			info.m=v[i].m;
//			info.d=v[i].d;
//			v2.push_back(info);
//		}
//	}
//	cout<<v2.size()<<endl;
//	for(int i=0;i<v2.size();i++){
//		cout<<v2[i].m<<" "<<v2[i].d<<endl;
//	}