#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x3fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m,s;
    std::cin>>n>>m>>s;
    std::vector<std::vector<std::pair<int,int> > > G(n+1);//邻接表
    for(int i=1;i<=m;i++){
        int u,v,w;/*起点，终点，边权*/
        std::cin>>u>>v>>w;
        G[u].push_back({v,w});//加边
    }
    std::vector<ll> dis(n+1,2147483647);
    
    auto spfa=[&](){
        std::queue<int> q;
        std::vector<bool> inq(n+1);
        q.push(s);
        dis[s]=0;
        inq[s]=1;
        while(!q.empty()){
            int u=q.front();q.pop();
            inq[u]=0;
            for(auto xx:G[u]){
                int v=xx.first,w=xx.second;
                if(dis[v]>dis[u]+w){
                    dis[v]=dis[u]+w;
                    if(!inq[v]){
                        inq[v]=1;
                        q.push(v);
                    }
                }
            }
        }
    };
    spfa();
    for(int i=1;i<=n;i++)std::cout<<dis[i]<<' ';
    return 0;
}
