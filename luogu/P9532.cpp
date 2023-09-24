#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll T;
    std::cin>>T;
    while(T--){
        ll n,x,x2;
        std::cin>>n>>x;
        ll t=0;
        x2=x;
        while(x%2==0){
            t++;
            x/=2;
        }
        //std::cout<<t<<' ';
        t=std::min(t+2,n);
        for(int i=t+1;i<=n;i++){
            x2*=2;
        }
        std::cout<<x2<<'\n';
    }
    return 0;
}
