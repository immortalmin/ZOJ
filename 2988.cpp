#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int n;
	float a=2.2046,b=0.4536,c=0.2642,d=3.7854;
	cin>>n;
	double aa,cc;
	string bb;
	for(int i=0;i<n;i++)
	{
		cin>>aa>>bb;
		if(bb=="kg")
		{
	    	cc=aa*a;
			printf("%d %.4lf lb\n",i+1,cc);
		}
		else if(bb=="lb")
		{
			cc=aa*b;
			printf("%d %.4lf kg\n",i+1,cc);
		}
		else if(bb=="l")
		{
			cc=aa*c;
			printf("%d %.4lf g\n",i+1,cc);
		}
		else
		{
			cc=aa*d;
			printf("%d %.4lf l\n",i+1,cc);
		}
	}
	return 0;
}