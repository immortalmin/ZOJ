#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
//    freopen("1.txt","r",stdin);
	int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[100];
        int tab = 0, space = 0;
        while (gets(s), strcmp(s, "##"))
        {
            int i, tempSpace = 0;
            for (i = 0; s[i] != '\0'; i++)
            {
                if (s[i] == '\t')
                {
                    tab++;
                    tempSpace += 4;
                }
                else if (s[i] == ' ')
                    tempSpace++;
                else
                    tempSpace = 0;
            }
            space += tempSpace;
        }
        printf("%d tab(s) replaced\n", tab);
        printf("%d trailing space(s) removed\n", space);
    }
    return 0;
}