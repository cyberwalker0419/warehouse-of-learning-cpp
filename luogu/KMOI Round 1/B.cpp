#include <bits/stdc++.h>
typedef long long ll;
#define N 911451407
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
ll quickpow(ll a,ll b){
    //*可改为+,res默认值为0
    ll res=1;
    while(b){
        if(b&1)res=(res*a)%N;
        a=(a*a)%N;
        b>>=1;
    }
    return res;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n;
    std::cin>>n;
    std::cout<<quickpow(2*(n),(n-1));
    return 0;
}
