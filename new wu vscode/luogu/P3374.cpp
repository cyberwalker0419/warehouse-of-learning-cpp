#include<bits/stdc++.h>
#define N 500005
typedef long long ll;
int n,m;
ll C[N];
ll lowbit(int x){
    return x&-x;
}
void update(ll x,ll v){
    for(int i=x;i<=n;i+=lowbit(i)){
        C[i]+=v;
    }
}
ll query(ll x){
    ll sum=0;
    for(int i=x;i>0;i-=lowbit(i)){
        sum+=C[i];
    }
    return sum;
}
int main(){
    std::cin>>n>>m;
    for(int i=1;i<=n;i++){
        int d;
        std::cin>>d;
        update(i,d);
    }
    for(int i=1;i<=m;i++){
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a==1){
            update(b,c);
        }
        else{
            std::cout<<query(c)-query(b-1)<<std::endl;
        }
    }
    return 0;
}