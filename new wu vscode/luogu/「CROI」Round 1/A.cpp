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
        ll op,m,n,q;
        std::cin>>op;
        if(op==1){
            std::cin>>n>>m;
            std::cout<<n+m-1<<std::endl;
        }else{
            std::cin>>n>>m>>q;
            if(n>=m){
                ll n1=q-m+1;
                //std::cout<<n1<<'\n';
                std::cout<<((m%998244353)*((n1-n)%998244353))%998244353<<std::endl;
            }else{
                ll m1=q-n+1;
                //std::cout<<m1<<'\n';
                std::cout<<((n%998244353)*((m1-m)%998244353))%998244353<<std::endl;
            }
        }
    }
    return 0;
}
