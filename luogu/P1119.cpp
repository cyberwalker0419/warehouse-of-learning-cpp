/*#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x3fffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m;
    std::cin>>n>>m;
    std::vector<int> t(n);
    for(int i=0;i<n;i++){
        std::cin>>t[i];
    }
    std::vector<std::vector<int> > f(n+1,std::vector<int>(n,INF));
    for(int i=0;i<n;i++)f[i][i]=0;
    for(int i=1;i<=m;i++){
        int x,y,z;
        std::cin>>x>>y>>z;
        f[x][y]=z;
        f[y][x]=z;
    }
    int q;
    std::cin>>q;
    int k=0;
    while(q--){
        int x,y,z;
        std::cin>>x>>y>>z;
        for(;t[k]<=z&&k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    f[i][j]=std::min(f[i][j],f[i][k]+f[k][j]);
                }
            }
        }
        std::cout<<((f[x][y]==INF||t[x]>z||t[y]>z)?-1:f[x][y])<<"\n";
    }
    return 0;
}*/
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