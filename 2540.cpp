#include<iostream>#include<cmath>#include<vector>#include<algorithm>#include<fstream>using namespace std;vector<double>v,vv,vvv;int main(){	//freopen("1.txt","r",stdin);	int n;	cin>>n;	char a[100];	for(int j=0;j<n;j++)	{		cin.getline(a,100);		if(j!=0) cout<<endl;		cout<<"Case "<<j+1<<":"<<endl; 		double a[4][2];		v.push_back(1.1111);    	for(int i=0;i<4;i++) cin>>a[i][0]>>a[i][1];    	for(int z=0;z<3;z++)    	{    		for(int i=z+1;i<4;i++)    		{    			double m=sqrt((a[z][0]-a[i][0])*(a[z][0]-a[i][0])+(a[z][1]-a[i][1])*(a[z][1]-a[i][1]));    			for(int q=0;q<v.size();q++)    			{    				if(m==v[q]) break;    				else if(q==v.size()-1) v.push_back(m);				}			}		}     	if(v.size()>3) cout<<"No"<<endl;     	else cout<<"Yes"<<endl;     	v.clear();	}	return 0;}