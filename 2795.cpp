#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int num[100000],pos[100000];  
int main()  
{  
    int T;  
    while(scanf("%d",&T)&&T)  
    {  
        int i,j;  
        for(int i=1;i<=T;i++)  
        {  
            scanf("%d",&num[i]);  
            pos[num[i]]=i;  
        }  
        int wc=1;  
        int flag=1;  
        for(int i=1;i<=T;i++)  
        {  
            if(pos[i]!=num[i])  
            {  
                flag=0;  
                break;  
            }  
        }  
        if(flag==0)  
        {  
            printf("not ambiguous\n");  
        }  
        else  
        {  
            printf("ambiguous\n");  
        }  
    }  
    return 0;  
}  