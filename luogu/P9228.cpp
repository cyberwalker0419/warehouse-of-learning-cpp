#include<bits/stdc++.h>
#define N 100007
typedef long long ll;
ll a[N],b[N];
ll n,m,k;
bool cmp(ll x,ll y){
    if(x>y){
        return 1;
    }
    return 0;
}
void init(){
    std::cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        std::cin>>b[i];
    }
    std::sort(a+1,a+n+1);
}
int main(){
    
    for(int i=1;i<=n;i++){
        std::cout<<a[i];
    }
    return 0;
}