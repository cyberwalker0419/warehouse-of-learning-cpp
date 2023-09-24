#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
struct Edge{
    int u,v,w;
    bool operator<(const Edge &rhs)const{//right hand side(右手边)
        return w<rhs.w;
    }
};

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    std::set<Edge> s;
    std::vector<Edge> e(m);
    for(int i=0;i<m;i++){
        std::cin>>e[i].u>>e[i].v>>e[i].w;
    }
    std::sort(e.begin(),e.end());
    std::vector<ll> fa(n+1);
    std::function<ll(ll)> find=[&](ll x){
        return fa[x]==x?x:fa[x]=find(fa[x]);
    };
    for(int i=1;i<=n;i++)fa[i]=i;
    ll ans=0,cnt=0;
    for(int i=0;i<m;i++){
        ll x=e[i].u,y=e[i].v;
        if(find(x)!=find(y)){
            ans+=e[i].w;
            std::cout<<ans<<' ';
            fa[find(x)]=find(y);
            cnt++;
            if(cnt==n-1)break;
        }
    }
    if(cnt==n-1){
        std::cout<<ans<<'\n';
    }else{
        std::cout<<"orz"<<"\n";
    }
    return 0;
}
