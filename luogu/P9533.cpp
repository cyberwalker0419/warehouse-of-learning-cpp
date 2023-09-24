#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int x;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::vector<int> a(n+1),vis((1<<20)+1);
    int ans=0;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>x;
        a[i]=a[i-1]^x;
        if(!a[i])ans++;
        ans+=vis[a[i]];
        vis[i]++;
    }
    std::cout<<ans;
    return 0;
}
