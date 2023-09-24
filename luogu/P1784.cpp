#include<bits/stdc++.h>
#define N 10
bool row[N][N],col[N][N],gong[N][N];
int num[N][N];
int g[10][10]={
{0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,2,2,2,3,3,3},
{0,1,1,1,2,2,2,3,3,3},
{0,1,1,1,2,2,2,3,3,3},
{0,4,4,4,5,5,5,6,6,6},
{0,4,4,4,5,5,5,6,6,6},
{0,4,4,4,5,5,5,6,6,6},
{0,7,7,7,8,8,8,9,9,9},
{0,7,7,7,8,8,8,9,9,9},
{0,7,7,7,8,8,8,9,9,9},
};
void init(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            std::cin>>num[i][j];
            if(num[i][j]!=0){
                row[i][num[i][j]]=col[j][num[i][j]]=gong[g[i][j]][num[i][j]]=1;
            }
        }
    }
}
void dfs(int x,int y){
    if(x==10){
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
                printf("%d%c",num[i][j],j==9?'\n':' ');
            }
        }
    exit(0);
    }
    if(!num[x][y]){
        for(int i=1;i<=9;i++){
            if(!row[x][i]&&!col[y][i]&&!gong[g[x][y]][i]){
                row[x][i]=col[y][i]=gong[g[x][y]][i]=1;
                num[x][y]=i;
                if(y!=9)dfs(x,y+1);
                else dfs(x+1,1);
                row[x][i]=col[y][i]=gong[g[x][y]][i]=0;
                num[x][y]=0;
            }
        }
    }else{
        if(y!=9)dfs(x,y+1);
        else dfs(x+1,1);
    }
}
void work(){
    dfs(1,1);
}
int main(){
    init();
    work();
    return 0;
}