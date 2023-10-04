#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int goal[6][6]={
{0},
{0,1,1,1,1,1},
{0,0,1,1,1,1},
{0,0,0,-1,1,1},
{0,0,0,0,1,1},
{0,0,0,0,0,1},
};
int mp[6][6];
int dx[]={-2,-2,2,2,1,1,-1,-1},dy[]={1,-1,1,-1,2,-2,2,-2};
int ss=0;
int h(){
    int cnt=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cnt+=(mp[i][j]!=goal[i][j]);
        }
    }
    return cnt;
}
void dfs(int s,int x,int y,int l){
    if(ss)return;
    if(!h()){
        ss=1;
        return;
    }
    for(int i=0;i<8;i++){
        int tx=x+dx[i],ty=y+dy[i];
        if(tx<1||tx>5||ty<1||ty>5)continue;
        std::swap(mp[x][y],mp[tx][ty]);
        if(s+h()<=l){
            dfs(s+1,tx,ty,l);   
        }
        std::swap(mp[x][y],mp[tx][ty]);
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T;
    std::cin>>T;
    while(T--){
        int sx=0,sy=0;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                char c;
                std::cin>>c;
                if(c=='*'){
                    mp[i][j]=-1;
                    sx=i;
                    sy=j;
                }
                else mp[i][j]=c-'0';
            }    
        }
        ss=0;
        for(int i=1;i<=15;i++){
            dfs(0,sx,sy,i);
            if(ss){
                std::cout<<i<<"\n";
            }
        }
        if(!ss){
            std::cout<<-1<<"\n";
        }
    }
    return 0;
}
