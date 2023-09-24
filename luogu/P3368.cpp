#include<bits/stdc++.h>
#define N 500005
typedef long long ll;
ll n,m;
ll C[N];
ll a[N],b[N];
ll lowbit(int x){
    return x&-x;
}
ll query(int x){
    ll sum=0;
    for(int i=x;i>0;i-=lowbit(i)){
        sum+=C[i];
    }
    return sum;
}
void update(ll x,ll v){
    for(int i=x;i<=n;i+=lowbit(i)){
        C[i]+=v;
    }
}
int main(){
    std::cin>>n>>m;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
        b[i]=a[i]-a[i-1];
        update(i,b[i]);
    }
    for(int i=1;i<=m;i++){
        int l,m,n,o;
        std::cin>>l;
        if(l==1){
            std::cin>>m>>n>>o;
            update(m,o);
            update(n+1,-o);
        }else{
            std::cin>>o;
            std::cout<<query(o)<<std::endl;
        }
    }
    return 0;
}