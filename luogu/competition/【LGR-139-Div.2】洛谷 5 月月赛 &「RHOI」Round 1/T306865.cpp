#include <bits/stdc++.h>
#define N 100005
typedef long long ll;
ll T,cnt=0,num=0,flag=0;
ll a[N]={},cnt1[N],cnt2[N];
void task1(ll x){
    a[x]++;
}
void task2(ll x,ll n){
    for(int i=1;i<=n;i++){
        if(!(i==x)){
            a[i]++;
        }
    }
}
int main(){
    std::cin>>T;
    while(T--){
        ll m,n;
        cnt=0; flag=0;
        std::cin>>n>>m;
        for(int i=1;i<=m;i++){
            ll o,x;
            std::cin>>o>>x;
            if(o==1){
                task1(x);
            }
        }
    }
   return 0;
}
