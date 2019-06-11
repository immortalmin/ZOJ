#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
//	freopen("1.txt","r",stdin);
	double a;
	int b,c;
	double p1[3]={4.5,6.0,5.0};
	int p2[3]={150,300,200};
	int p3[3]={200,500,300};
	string name[3]={"Wide Receiver","Lineman","Quarterback"};
	while(cin>>a>>b>>c){
		if(a==0&&b==0&&c==0) break;
		int flag=0;
		for(int i=0;i<3;i++){
			if(a<=p1[i]&&b>=p2[i]&&c>=p3[i]){
				if(flag==1) cout<<" ";
				cout<<name[i];
				flag=1;
			}
		}
		if(flag==0) cout<<"No positions";
		cout<<endl;
	}
	
	return 0;
} 