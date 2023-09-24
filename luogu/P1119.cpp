#include <bits/stdc++.h>
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
}
