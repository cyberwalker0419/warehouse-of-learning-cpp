#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
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
    auto Prim=[&](){
        std::priority_queue<heap> q;
        std::vector<std::vector<std::pair<int,int> > > G(n+1);
        std::vector<bool> inT(n+1);
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
    return 0;
}
