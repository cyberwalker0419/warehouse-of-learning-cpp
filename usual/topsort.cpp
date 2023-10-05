#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int m,n;
    std::vector<std::vector<int> > G(m+1,std::vector<int>(n+1));
    std::vector<int> in(n+1);
    for(int i=1;i<=m;i++){
        int u,v;
        std::cin>>u>>v;
        G[u].push_back(v);
        in[v]++;
    }
    std::queue<int> q;
    for(int i=1;i<=n;i++){
        if(!in[i])q.push(i);
    }
    while(!q.empty()){
        int u=q.front();q.pop();
        std::cout<<u<<' ';
        for(auto v:G[u]){
            if(--in[v]==0){
                q.push(v);
            }
        }
    }
    return 0;
}
