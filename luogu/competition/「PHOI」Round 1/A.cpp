#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n,m,x,y,k;
    std::cin>>n>>m>>x>>y>>k;
    ll num=(n/x)*(m/y)-1;
    if(n%x!=0){
        num++;
    }
    if(m%y!=0){
        num++;
    }
    if(num%k==0){
        std::cout<<num/k<<' '<<num;
    }else{
        std::cout<<num/k+1<<' '<<num;
    }
    return 0;
}
