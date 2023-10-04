#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m;
    std::cin>>n>>m;
    std::vector<ll> h(n+1);
    for(int i=1;i<=n;i++){
        std::cin>>h[i];
    }
    auto check=[&](int x){
        ll ans=0;
        for(int i=1;i<=n;i++){
            if(h[i]>x)ans+=h[i]-x;
        }
        return ans<=m;
    };
    ll l=0,r=1e9;
    while(l+1<r){
        ll mid=(l+r)>>1;
        if(check(mid))r=mid;
        else l=mid;
    }
    std::cout<<r;
    return 0;
}
