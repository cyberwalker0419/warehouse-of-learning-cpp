//逆元法
#include<bits/stdc++.h>
typedef long long ll;

ll quickpow(ll a,ll b,ll p){
    //*可改为+,res默认值为0
    ll res=1;
    while(b){
        if(b&1)res=(res*a)%p;
        a=(a*a)%p;
        b>>=1;
    }
    /*
    while(b){
        if(b%2)res=(res*a)%p;
        a=(a*a)%p;
        b/=2;
    }
    */
    return res;
}
int main(){
    ll a,b,p;
    // a/b mod m
    std::cin>>a>>b>>p;
    std::cout<<quickpow(a,b,p);
    std::cout<<a*quickpow(b,p-2,p)%p;
    return 0;
}
