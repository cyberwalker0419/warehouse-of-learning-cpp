#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define lson (o*2)
#define rson (o*2+1)
#define mid ((l+r)/2)
#define INF 0x7fffffffffffffff
ll sumn[N*4],maxn[N*4],tag[N*4];
int a[N];
void pushup(int o){
    sumn[o]=sumn[lson]+sumn[rson];
    maxn[o]=std::max(maxn[lson],maxn[rson]);
}
void add(int o,int l,int r,ll v){
    sumn[o]+=(r-l+1)*v;
    maxn[o]+=v;
    tag[o]+=v;
}
void pushdown(int o,int l,int r){
    if(!tag[o])return;
    add(lson,l,mid,tag[o]);
    add(rson,mid+1,r,tag[o]);
    tag[o]=0;
}
void build(int o,int l,int r){
    if(l==r){
        sumn[o]=maxn[o]=a[l];
        return;
    }
    build(lson,l,mid);
    build(rson,mid+1,r);
    pushup(o);
}
ll querySum(int o,int l,int r,int x,int y){
    if(l>=x&&r<=y)return sumn[o];
    pushdown(o,l,r);
    ll ans=0;
    if(x<=mid)ans+=querySum(lson,l,mid,x,y);
    if(y>mid)ans+=querySum(rson,mid+1,r,x,y);
    return ans;
}
ll queryMax(int o,int l,int r,int x,int y){
    if(l>=x&&r<=y)return maxn[o];
    pushdown(o,l,r);
    ll ans=-INF;
    if(x<=mid)ans+=std::max(ans,queryMax(lson,l,mid,x,y));
    if(y>mid)ans+=std::max(ans,queryMax(rson,mid+1,r,x,y));
    return ans;
}
void update(int o,int l,int r,int x,int y,int z){
    if(l>=x&&r<=y){
        add(o,l,r,z);
        return;
    }
    pushdown(o,l,r);
    if(x<=mid)update(lson,l,mid,x,y,z);
    if(y>mid)update(rson,mid+1,r,x,y,z);
    pushup(o);
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    build(1,1,n);
    return 0;
}
