#include<bits/stdc++.h>
typedef long long ll;
ll quickpow(ll a,ll b,ll M){
    ll res=1;
    while(b){
        if(b&1)res=(a*res)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return res;
}
int main(){
    ll a,b,q,s;
    std::cin>>a>>b>>q;
    s=quickpow(a,b,q)%q;;
    printf("%lld^%lld mod %lld=%lld",a,b,q,s);
    return 0;
}