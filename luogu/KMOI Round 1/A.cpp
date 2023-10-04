#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll l,r,k,c=1;
    std::cin>>l>>r>>k;
    for(int i=1;i<=l;i++){
        c=(c%k)*(i%k)%k;
    }
    //std::cout<<c;
    ll ans=c;
    for(int i=1;i<=r-l;i++){
        c=(l+i)*c%k;
        ans=std::max(ans,c);
    }
    std::cout<<ans;
    return 0;
}
