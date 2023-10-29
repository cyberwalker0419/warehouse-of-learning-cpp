#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
ll a[N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i];
    }
    std::sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        std::cout<<a[i]<<' ';
    }
    return 0;
}
