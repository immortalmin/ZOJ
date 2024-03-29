#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
struct Info{
	short int year,month,day;
}info;
vector<Info>v;
bool judge(short int n){//判断是否是闰年
	if(n%400==0||(n%4==0&&n%100!=0)) return true;
	else return false;
}
int main(){
//	freopen("1.txt","r",stdin);
	short int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	info.year=2000,info.month=1,info.day=1;
	v.push_back(info);
	if(judge(info.year)) months[1]=29;
	while(true){
		info.day++;
		if(info.day==months[info.month-1]+1){
			info.day=1;
			info.month++;
		}
		if(info.month==13){
			info.year++;
			info.month=1;
			if(judge(info.year)) months[1]=29;
			else months[1]=28;
		}
		v.push_back(info);
		if(info.year==9999&&info.month==12&&info.day==31){
//			cout<<info.year<<" "<<v.size()<<endl;
			break;
		}
		
	}
//	cout<<v.size()<<endl;
	while(scanf("%d",&n)!=EOF){
		if(n==-1) break;
		printf("%d-",v[n].year);
		if(v[n].month<10) printf("0");
		printf("%d-",v[n].month);
		if(v[n].day<10) printf("0");
		printf("%d ",v[n].day);
		if(n%7==0) printf("Saturday\n");
		else if(n%7==1) printf("Sunday\n");
		else if(n%7==2) printf("Monday\n");
		else if(n%7==3) printf("Tuesday\n");
		else if(n%7==4) printf("Wednesday\n");
		else if(n%7==5) printf("Thursday\n");
		else if(n%7==6) printf("Friday\n");
	}
	return 0;
}