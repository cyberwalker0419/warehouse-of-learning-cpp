#include <bits/stdc++.h>
#define N 100005
int u,v;
int ans[N];
std::vector<int> G[N];
void dfs(int u,int anc){
    for(auto v:G[u]){
        if(!ans[v]){
            ans[v]=anc;
            dfs(v,anc);
        }
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    for(int i=1;i<=m;i++){
            std::cin>>u>>v;
            G[v].push_back(u);
    }
    for(int i=n;i>=1;i--){
        if(!ans[i]){
            ans[i]=i;
            dfs(i,i);
        }
    }
    for(int i=1;i<=n;i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}
