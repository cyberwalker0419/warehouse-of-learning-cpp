#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x3fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T;
    std::cin>>T;
    while(T--){
        ll n,m;
        std::cin>>n>>m;
        std::vector<std::vector<std::pair<int,int> > > G(n+1);//邻接表
        for(int i=1;i<=m;i++){
            int u,v,w;/*起点，终点，边权*/
            std::cin>>u>>v>>w;
            if(w>=0){
                G[u].push_back({v,w});
                G[v].push_back({u,w});
            }else{
                G[u].push_back({v,w});
            }
        }
        std::vector<ll> dis(n+1,2147483647),cnt(n+1);
        std::queue<int> q;
        std::vector<bool> inq(n+1);
        bool flag=0;
        q.push(1);
        dis[1]=0;
        inq[1]=1;
        while(!q.empty()){
            int u=q.front();q.pop();
            inq[u]=0;
            for(auto xx:G[u]){
                int v=xx.first,w=xx.second;
                if(dis[v]>dis[u]+w){
                    dis[v]=dis[u]+w;
                    if(++cnt[v]>n){
                       flag=1;
                       break;
                    }
                    if(!inq[v]){
                        inq[v]=1;
                        q.push(v);
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(flag)std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;
}
