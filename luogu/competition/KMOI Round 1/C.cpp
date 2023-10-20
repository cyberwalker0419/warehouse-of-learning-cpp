#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
struct Edge
{   
    int u,v,w;
    bool operator<(const Edge& rhs)const{
        return w<rhs.w;
    }
};
struct heap{
    int v,w;
    bool operator<(const heap& rhs)const{
        return rhs.w<w;
    }//小根堆
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<int> > mp(m+1,std::vector<int>(m+1));
    std::vector<int> xxx(n+1),yyy(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>xxx[i]>>yyy[i];
        mp[xxx[i]][yyy[i]]=i;
    }
    int dx[]={1,1,-1,-1,2,2,-2,-2},dy[]={2,-2,2,-2,1,-1,1,-1};
    std::vector<Edge> e;
    std::vector<std::vector<std::pair<int,int> > > G(n+1);
    auto bfs=[&](int xx,int yy){
        std::queue<std::pair<int,int> > q;
        std::vector<std::vector<bool> > vis(m+1,std::vector<bool>(m+1));
        std::vector<std::vector<int> > step(m+1,std::vector<int>(m+1));
        q.push({xx,yy});
        vis[xx][yy]=1;
        step[xx][yy]=0;
        while(!q.empty()){
            auto sx=q.front();q.pop();
            int x=sx.first,y=sx.second;
            for(int i=0;i<8;i++){
                int tx=x+dx[i],ty=y+dy[i];
                if(tx<1||tx>m||ty<1||ty>m)continue;
                vis[tx][ty]=1;
                step[tx][ty]=step[x][y]+1;
                if(mp[tx][ty]){
                    e.push_back((Edge){mp[xx][yy],mp[tx][ty],step[tx][ty]+1});
                }
                q.push({tx,ty});
            }
        }
    };
    for(int i=1;i<=n;i++){
        bfs(xxx[i],yyy[i]);
    }

    std::vector<int> fa(n+1);
    std::function<int(int)> find=[&](int x){
        return fa[x]==x?x:fa[x]=find(fa[x]);
    };
    for(int i=1;i<=n;i++)fa[i]=i;
    int ans=0,cnt=0;
    auto Kruskal=[&](){
        std::sort(e.begin(),e.end());
        for(auto ee:e){
            if(find(ee.u)!=find(ee.v)){
                fa[find(ee.u)]=find(ee.v);
                ans+=ee.w;
                if(++cnt==n-1)break;
            }
        }
    };
    auto Prim=[&](){
        std::priority_queue<heap> q;
        std::vector<bool> inT(n+1);
        inT[1]=1;
        for(auto xx:G[1]){
            int v=xx.first,w=xx.second;
            q.push((heap){v,w});
        }
        int ans=0;
        for(int i=1;i<n;i++){
            int v,w;
            do{
                auto xx.top();q.pop();
                int v=xx.v,w=xx.w;
            }while(inT[u]);
            ans+=w;
            inT[u]=1;
            for(auto xx:G[u]){
                int v=xx.first,w=xx.second;
                q.push((heap){v,w});
            }
        }
    };
    Kruskal();
    std::cout<<ans;
    return 0;
}
