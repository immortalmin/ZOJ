#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
//man1保存喜欢对方比自己高的男的，man2保存喜欢对方比自己矮的男的
//woman1保存喜欢对方比自己矮的女的，woman2保存喜欢对方比自己高的女的
vector<int>man1,man2,woman1,woman2;
int main(){
//	freopen("1.txt","r",stdin);
	int T;
	scanf("%d",&T);
	while(T--){
		man1.clear();
		man2.clear();
		woman1.clear();
		woman2.clear();
		int n,m,a[200000],b[200000],c,d;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=m;i++){
			cin>>b[i];
		}
		for(int i=1;i<=n;i++){
			cin>>c;
			if(c==1){
				man1.push_back(a[i]);
			}else man2.push_back(a[i]);
		}
		for(int i=1;i<=m;i++){
			cin>>d;
			if(d==0){
				woman1.push_back(b[i]);
			}else woman2.push_back(b[i]);
		}
		sort(man1.begin(),man1.end());
		sort(man2.begin(),man2.end());
		sort(woman1.begin(),woman1.end());
		sort(woman2.begin(),woman2.end());
		int len1=man1.size(),len2=man2.size(),len3=woman1.size(),len4=woman2.size();
//		l=min(len1,len3);
		int sum=0;
		for(int i=0,j=0;;i++,j++){
			if(i>=len1||j>=len3) break;
			if(man1[i]<woman1[j]){
//				cout<<man1[i]<<" "<<woman1[j]<<endl;
				sum++;
			}
			else i--;
		}
		for(int i=0,j=0;;i++,j++){
			if(i>=len2||j>=len4) break;
			if(man2[i]>woman2[j]){
//				cout<<man2[i]<<" "<<woman2[j]<<endl;
				sum++;
			}
			else j--;
		}
		cout<<sum<<endl;
	} 
	return 0;
} 