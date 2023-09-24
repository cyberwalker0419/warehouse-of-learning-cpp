#include <bits/stdc++.h>
typedef long long ll;
#define N 100005
#define INF 0x7fffffff
#define INFLL 0x7fffffffffffffff
int a[N];
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m,ans;
    std::cin>>n>>m;
    ans=4*n-2*m;
    if(ans<0){
        std::cout<<0;
    }else{
        std::cout<<ans;
    }
    return 0;
}
