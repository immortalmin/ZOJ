#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;
char ss[10000];
int main()
{
	//freopen("1.txt","r",stdin);
	int pos=0;
	while(scanf("%s",ss)!=EOF)
	{
		if(strcmp(ss,"<hr>")==0)
		{
			if(pos)
			{
				puts("");
			}
			for(int i=0;i<80;i++)
			{
				printf("-");
			}
			puts("");
			pos=0;
		}
		else if(strcmp(ss,"<br>")==0)
		{
			puts("");
			pos=0;
		}
		else
		{
			if(pos+strlen(ss)+(pos==0?0:1)>80)
			{
				printf("\n%s",ss);
				pos=strlen(ss);
			}
			else
			{
				if(pos!=0)
				{
					printf(" ");
					pos++;
				}
				printf("%s",ss);
				pos+=strlen(ss);
			}
		}
	}
	puts("");
	return 0;
}