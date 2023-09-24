#include<bits/stdc++.h>
#define N 1005
int ans[N][N],dx[]={-1,-2,-2,-1,1,2,2,1},dy[]={-2,-1,1,2,2,1,-1,-2};
int n,m,sx,sy;
void bfs(){
    memset(ans,-1,sizeof(ans));
    std::queue<int> qx,qy;
    qx.push(sx);
    qx.push(sy);
    ans[sx][sy]=0;
    while(!qx.empty()){
        int x=qx.front();qx.pop();
        int y=qy.front();qy.pop();
        for(int i=0;i<=7;i++){
            int tx=x+dx[i],ty=y+dy[i];
            if(tx<1||tx>m||ty<1||tx>n){
            continue;
            }
            if(ans[tx][ty]!=-1){
            continue;
            }
            ans[x][y]=ans[tx][ty]+1;
            qx.push(tx);
            qy.push(ty);
        }
    }
}
void init(){
    std::cin>>n>>m>>sx>>sy;
}
int main(){
    init();
    bfs();
    for(int i=1;i<=n;i++){
        for(int j=1;i<=m;i++){
            std::cout<<ans[i][j]<<' ';
        }
        std::cout<<'\n';
    }
    return 0;
}