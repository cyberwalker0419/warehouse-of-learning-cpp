#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x3fffffff
#define INFLL 0x7fffffffffffffff
struct heap{
    ll d,id;/*点，编号*/
    bool operator<(const heap &rhs)const{
        return rhs.d<d;/*以d从小到大，数组反过来*/
    }
};
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
    auto Dijkstra=[&](){
        std::priority_queue<heap> q;//可选点集合
        std::vector<ll> dis(n+1,INF);//最短路
        q.push((heap){0,s});
        dis[s]=0;
        while(!q.empty()){
            auto xx=q.top();q.pop();
            int u=xx.id;
            if(xx.d!=dis[u])continue;
            for(auto xx:G[u]){
                int v=xx.first,w=xx.second;
                if(dis[v]>dis[u]+w){//松弛操作
                    dis[v]=dis[u]+w;
                    q.push((heap){dis[v],v});
                }
            }
        }
        for(int i=1;i<=n;i++)std::cout<<dis[i]<<' ';
    };
    Dijkstra();
    return 0;
}
