#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int ans=0,n=8;
    int maxn=(1<<n)-1;
    std::function<void(int,int,int,int)> dfs=[&](int row,int col,int l,int r){
        if(col==(1<<n)-1){
                ans++;
                return;
            }
        int now=(~(col|l|r))&maxn;
        while(now){
            int aa=now&(-now);
            now-=aa;
            dfs(now+1,col|aa,(l|aa)<<1,(r|aa)>>1);
        }
    };
    dfs(1,0,0,0);
    std::cout<<ans;
    return 0;
}
