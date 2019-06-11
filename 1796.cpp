#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	int a1,a2,b1,b2,c1,c2,d1,d2;
	while(cin>>b1>>b2>>c1>>c2>>d1>>d2){
		if(b1==0&&b2==0&&c1==0&&c2==0&&d1==0&&d2==0) break;
		cout<<"Anna's won-loss record is "<<c2+d2-b1<<"-"<<c1+d1-b2<<"."<<endl;
	}
	return 0;
}