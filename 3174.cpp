#include<iostream> 
#include<cstdio>
using namespace std;  
  
int main()  
{  
    int x,y;  
    int T;  
    int year[12] = { 1,4,9,16,25,36,49,64,81,100,121,144};  
    scanf("%d",&T);  
    while(T--)  
    {  
        int r = 0;  
        scanf("%d %d",&x,&y);  
         for(int i = x; i <= y ; i++)  
        {  
            int t = i%1000;  
            if(t==100||t==121||t==144)  
            {  
                r++;  
                continue;  
            }  
            else  
            {  
                t = t%100;  
                for( int j = 0 ;j<9;j++)  
                {  
                    if(t == year[j])  
                        r++;  
                }  
            }  
        }  
        printf("%d\n",r);  
    }  
    return 0;  
}  