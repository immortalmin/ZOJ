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
char mmap[105][105];
int book[105][105];
map<char,int>mm;
int n;
int cal(int x,int y) {
	memset(book,0,sizeof(book));
	int maxn=-1,sum=0;
	//1
	if(book[x][y]==0) {
		mm[mmap[x][y]]++;
		book[x][y]=1;
		sum++;
		if(mm[mmap[x][y]]>maxn) maxn=mm[mmap[x][y]];
	}

	//2
	if(book[y][x]==0) {
		mm[mmap[y][x]]++;
		book[y][x]=1;
		sum++;
		if(mm[mmap[y][x]]>maxn) maxn=mm[mmap[y][x]];
	}

	//3
	if(book[y][n-x+1]==0) {
		mm[mmap[y][n-x+1]]++;
		book[y][n-x+1]=1;
		sum++;
		if(mm[mmap[y][n-x+1]]>maxn) maxn=mm[mmap[y][n-x+1]];
	}

	//4
	if(book[x][n-y+1]==0) {
		mm[mmap[x][n-y+1]]++;
		book[x][n-y+1]=1;
		sum++;
		if(mm[mmap[x][n-y+1]]>maxn) maxn=mm[mmap[x][n-y+1]];
	}

	//5
	if(book[n+1-x][n-y+1]==0) {
		mm[mmap[n+1-x][n-y+1]]++;
		book[n+1-x][n-y+1]=1;
		sum++;
		if(mm[mmap[n+1-x][n-y+1]]>maxn) maxn=mm[mmap[n+1-x][n-y+1]];
	}

	//6
	if(book[n+1-y][n-x+1]==0) {
		mm[mmap[n+1-y][n-x+1]]++;
		book[n+1-y][n-x+1]=1;
		sum++;
		if(mm[mmap[n+1-y][n-x+1]]>maxn) maxn=mm[mmap[n+1-y][n-x+1]];
	}


	//7
	if(book[n+1-y][x]==0) {
		mm[mmap[n+1-y][x]]++;
		book[n+1-y][x]=1;
		sum++;
		if(mm[mmap[n+1-y][x]]>maxn) maxn=mm[mmap[n+1-y][x]];
	}


	//8
	if(book[n+1-x][y]==0) {
		mm[mmap[n+1-x][y]]++;
		book[n+1-x][y]=1;
		sum++;
		if(mm[mmap[n+1-x][y]]>maxn) maxn=mm[mmap[n+1-x][y]];
	}


	mmap[x][y]='*';
	mmap[y][x]='*';
	mmap[y][n-x+1]='*';
	mmap[x][n-y+1]='*';
	mmap[n+1-x][n-y+1]='*';
	mmap[n+1-y][n-x+1]='*';
	mmap[n+1-y][x]='*';
	mmap[n+1-x][y]='*';
	return sum-maxn;
}
int main() {
//	freopen("1.txt","r",stdin);
	int T;
	cin>>T;
	while(T--) {
		cin>>n;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin>>mmap[i][j];
			}
		}
		int sum=0;
		for(int i=1; i<=(n+1)/2; i++) {
			for(int j=1; j<=(n+1)/2; j++) {

				mm.clear();
				int b=cal(i,j);
//				if(b!=0) cout<<i<<" "<<j<<endl;
				sum+=b;
			}
		}
		cout<<sum<<endl;
//		cout<<"$$$$$$$$$"<<endl;
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=n;j++){
//				cout<<mmap[i][j];
//			}
//			cout<<endl;
//		}
//		cout<<endl;
	}
	return 0;
}
