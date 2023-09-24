#include<bits/stdc++.h>
#define N 105
int m,n,stx,sty,edx,edy;
int mp[N][N],vis[N][N],ansx[1005],ansy[1005];
int dx[]={0,-1,0,1},dy[]={-1,0,1,0};
void dfs(int x,int y,int step){
    if(x==edx&&y==edy){
        printf("(%d,%d)",)
    }
    for(int i=0;i<3;i++){
        int tx=x+dx[i],ty=y+dy[i];
        if(tx<1||tx>m||ty<1||tx>n){
            continue;
        }
        if(vis[tx][ty]||!mp[tx][ty]){
            continue;
        }
        vis[tx][ty]=1;
        ansx[step]=tx;
        ansy[step]=ty;
        dfs(tx,ty,step+1);
        vis[tx][ty]=0;
    }
}
void init(){
    std::cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            std::cin>>mp[i][j];
        }
    }
    std::cin>>stx>>sty;
    std::cin>>edx>>edy;
}
int main(){
    init();
    dfs(stx,sty,1);
    return 0;
}