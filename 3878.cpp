#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
int main(){
//	freopen("xph.txt","r",stdin);
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c=='-')printf("[");
		else if(c=='_')printf("{");
		else if(c=='+')printf("}");
		else if(c=='=')printf("]");
		else if(c=='Q')printf("\"");
		else if(c=='q')printf("'");
		else if(c=='W')printf("<");
		else if(c=='w')printf(",");
		else if(c=='E')printf(">");
		else if(c=='e')printf(".");
		else if(c=='R')printf("P");
		else if(c=='r')printf("p");
		else if(c=='T')printf("Y");
		else if(c=='t')printf("y");
		else if(c=='Y')printf("F");
		else if(c=='y')printf("f");
		else if(c=='U')printf("G");
		else if(c=='u')printf("g");
		else if(c=='I')printf("C");
		else if(c=='i')printf("c");
		else if(c=='O')printf("R");
		else if(c=='o')printf("r");
		else if(c=='P')printf("L");
		else if(c=='p')printf("l");
		else if(c=='{')printf("?");
		else if(c=='[')printf("/");
		else if(c=='}')printf("+");
		else if(c==']')printf("=");
		else if(c=='S')printf("O");
		else if(c=='s')printf("o");
		else if(c=='D')printf("E");
		else if(c=='d')printf("e");
		else if(c=='F')printf("U");
		else if(c=='f')printf("u");
		else if(c=='G')printf("I");
		else if(c=='g')printf("i");
		else if(c=='H')printf("D");
		else if(c=='h')printf("d");
		else if(c=='J')printf("H");
		else if(c=='j')printf("h");
		else if(c=='K')printf("T");
		else if(c=='k')printf("t");
		else if(c=='L')printf("N");
		else if(c=='l')printf("n");
		else if(c==':')printf("S");
		else if(c==';')printf("s");
		else if(c=='"')printf("_");
		else if(c=='\'')printf("-");
		else if(c=='Z')printf(":");
		else if(c=='z')printf(";");
		else if(c=='X')printf("Q");
		else if(c=='x')printf("q");
		else if(c=='C')printf("J");
		else if(c=='c')printf("j");
		else if(c=='V')printf("K");
		else if(c=='v')printf("k");
		else if(c=='B')printf("X");
		else if(c=='b')printf("x");
		else if(c=='N')printf("B");
		else if(c=='n')printf("b");
		else if(c=='<')printf("W");
		else if(c==',')printf("w");
		else if(c=='>')printf("V");
		else if(c=='.')printf("v");
		else if(c=='?')printf("Z");
		else if(c=='/')printf("z");
		else printf("%c",c);
	}
}