#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int col[N][N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::function<void(int,int,int)> dfs=[&](int x,int y){
        if(x==n+1){
            cal();
            return;
        }
        col=[x][y]=0;
        if(y==m)dfs(x+1,1);
        else dfs(x,y+1);
        col=1;
        if(y==m)dfs(x+1,1);
        else dfs(x,y+1);
    };
    return 0;
}
