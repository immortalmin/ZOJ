#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define maxnum 26
typedef struct{
    int l,r,u,d;
}data;
data squares[maxnum];//squares是输入的各种方块的类型数组，最多有25种类型
int squaresnum[maxnum],fillsquares[maxnum],testnum=0,line,all;//squaresnum是对应每一种类型方块的数量
//fillsquares是每一个位置的数组，指明应该放哪一种类型的方块
//line是几行几列，all是总共有的方块类型的数目
bool Judge(data Temp,data Compare){
    if(Temp.d==Compare.d && Temp.l==Compare.l
        && Temp.r==Compare.r && Temp.u==Compare.u)
        return true;
    return false;
}
void Input(){

    all=0;
    memset(squaresnum,maxnum,0);
    for(int i=0,j ;i<line*line;i++){
       data Temp;
       cin>>Temp.u>>Temp.r>>Temp.d>>Temp.l;
       for(j=0;j<all;j++){  //判断方块类型是否已经存在，存在可不添加，数量加1
            if( Judge(Temp,squares[j]) ){
               squaresnum[j]++;
               break;  //跳出循环
            }
        }
        if(j==all) //如果不存在，则添加
            squares[all]=Temp,squaresnum[all++]=1;
    }
}
bool solve(int locate){  //找出第locate位置应该放那种类型的方块，和深搜差不多

    if(locate==line*line)
        return true;

    int x=locate/line,y=locate%line,i;//求出locate在棋盘中的相对位置，以便于剪枝

    for(i=0;i<all;i++)
    {

        if(squaresnum[i]==0)
            continue;
        if(x>0 && squares[fillsquares[locate-line]].d!=squares[i].u )
            //它不是第一行并且上一个方块的下面与它的上面不相等
            continue; //继续下一次判断
        if(y>0 && squares[fillsquares[locate-1]].r!=squares[i].l)
            //它不是第一列并且左边的方块的右边与它的左面不相等
            continue;
        fillsquares[locate]=i; // locate位置可以放第i种方块
        squaresnum[i]--; //第i种方块减少一个
        if(solve(locate+1)) return true;//这个return true还是很重要的
        squaresnum[i]++;//如果下一个不合适了，得回溯一个方块
    }
    return false;
}
int main(){
//	freopen("1.txt","r",stdin);
    while(cin>>line && line )
    {

        if(testnum)
            cout<<endl;
        Input();
        cout<<"Game "<<++testnum<<": ";
        puts(solve(0)?"Possible":"Impossible");
    }
    return 0;
}