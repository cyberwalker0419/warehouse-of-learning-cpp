#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m;
    std::cin>>n>>m;
    std::vector<int> t(n+2);
    std::vector<std::vector<int> > dis(n+2,std::vector<int>(n+2,1e9));
    for(int i=1;i<=n;i++){
        dis[i][i]=0;
        std::cin>>t[i];
    } 
    for(int i=1;i<=m;i++){
        int u,v,w;
        std::cin>>u>>v>>w;
        u++;
        v++;
        dis[u][v]=w;
        dis[v][u]=w;
    }
    int q;
    std::cin>>q;
    int k=1;
    while(q--){
        int a,b,c;
        std::cin>>a>>b>>c;
        a++;b++;
        for(;t[k]<=c;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    dis[i][j]=std::min(dis[i][j],dis[i][k]+dis[k][j]);
                }
            }
        }
        if(t[a]>c||t[b]>c){
            std::cout<<-1;
        }else{
            std::cout<<(dis[a][b]!=1e9?dis[a][b]:-1)<<"\n";
        }
    }
    return 0;
}