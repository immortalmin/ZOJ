#include <stdio.h>  
int main()  
{  
    int n, m, c, j=1;  
    while(scanf("%d %d %d", &n, &m, &c) != EOF && n && m && c)  
    {  
        int ni[20], sta[105] = {0};  
        int i, x, sum = 0, maxsum = 0;  
        for(i = 1; i <= n; i++)  
        {  
            scanf("%d", &ni[i]);  
        }  
        for(i = 1; i <= m; i++)  
        {  
            scanf("%d", &x);  
            if(sta[x] == 0)  
            {  
                sta[x] = 1;  
                sum += ni[x];  
                if(sum > maxsum)  
                    maxsum = sum;  
            }  
            else  
            {  
                sta[x] = 0;  
                sum -= ni[x];  
            }  
        }  
        printf("Sequence %d\n", j);  
        if(sum > c)  
            printf("Fuse was blown.\n\n");  
        else  
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", maxsum);  
        j++;  
    }  
    return 0;  
} 